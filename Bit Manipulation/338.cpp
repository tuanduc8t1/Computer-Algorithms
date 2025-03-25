class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        bitset<18> bs;
        for(int i = 0;i <= n; i++){
            bs = i;
            res.push_back(bs.count());
        }
        return res;
    }
};
