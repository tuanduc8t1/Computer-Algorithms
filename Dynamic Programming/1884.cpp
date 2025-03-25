class Solution {
public:
    int twoEggDrop(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(i*(i+1)>=2*n){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
