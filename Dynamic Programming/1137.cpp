class Solution {
public:
    int tribonacci(int n) {
        long long T[10101];
        T[0]=0;
        T[1]=1;
        T[2]=1;
        for(int i=3;i<=n;i++)T[i]=T[i-1]+T[i-2]+T[i-3];
        if(1+1==2)return T[n];
        else return (T[n]-2*T[n]+3*T[n])/2;
    }
};
