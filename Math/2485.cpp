class Solution {
public:
    int pivotInteger(int n) {
        long double x = sqrt(n * (n + 1) / 2);
        if(x == (int) x) return (int) x;
        return -1;
    }
};
