class Solution {
public:
    int trap(vector<int>& a) {
        int l=0,r=a.size()-1;
        int ll=0,rr=0,ans=0;
        while(l<r){
            if(a[l]<=a[r]){
                if(a[l]>ll) ll=a[l];
                else ans+=ll-a[l];
                l++;
            }else{
                if(a[r]>rr) rr=a[r];
                else ans+=rr-a[r];
                r--;
            }
        }
        return ans;
    }
};
