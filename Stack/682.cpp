class Solution {
public:
    int calPoints(vector<string>& ops) {
        int res = 0;
        deque<int> dq;
        for(int i = 0; i < ops.size(); ++i){
            if(ops[i] == "+"){
                dq.push_back(dq.back() + dq[dq.size()-2]);
            }else if(ops[i] == "C"){
                dq.pop_back();
            }else if(ops[i] == "D"){
                dq.push_back(2 * dq.back());
            }else dq.push_back(stoi(ops[i]));
        }
        for(auto it : dq)res += it;
        return res;
    }
};
