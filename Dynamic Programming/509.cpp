class Solution {
public:
    int fib(int n) {
        long long F[505];
        F[0]=0,F[1]=1;
        for(int i=2;i<=n;i++)F[i]=F[i-1]+F[i-2];
        return F[n];
    }
};
