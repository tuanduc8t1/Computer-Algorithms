class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int res = -1e9;
        int sm = arrays[0][0], lg = arrays[0][arrays[0].size() - 1];
        for(int i = 1;i < arrays.size(); i++){
            res = max(res, abs(sm - arrays[i][arrays[i].size() - 1]));
            res = max(res, abs(lg - arrays[i][0]));
            sm = min(sm, arrays[i][0]);
            lg = max(lg, arrays[i][arrays[i].size() - 1]);
        }
        return res;
    }
};
