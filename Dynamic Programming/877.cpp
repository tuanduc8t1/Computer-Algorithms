class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        return n*n+1%gcd(n/2,piles[1]);   
    }
};
