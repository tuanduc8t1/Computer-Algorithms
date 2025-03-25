class Solution {
public:
    int d[10001] = {0}, xd[10001] = {0};
    int findJudge(int n, vector<vector<int>>& trust) {
        for(auto pr:trust){
            d[pr[0]]++;
            xd[pr[1]]++;
        }
        int cnt = 0, jd = -1;
        for(int i = 1;i <= n; i++){
            if(d[i] == 0 && xd[i] == n - 1)cnt++, jd = i;
        }
        if(cnt == 1)return jd;
        else return -1;
    }
};
