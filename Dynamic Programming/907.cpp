class Solution {
public:
    typedef long long ll;
    ll mod = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        arr.insert(arr.begin(), 0);
        arr.push_back(0);
        int n = arr.size();
        vector<int> prev(n, 0);
        vector<int> next(n, n-1);
 
        stack<int> st;
        for(int i=0; i<n; ++i) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                next[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
 
        while(!st.empty()) st.pop();
 
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                prev[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
 
        ll ans = 0;
        for(int i=0; i<n; i++) {
            ans += (ll) arr[i] * (ll) (i - prev[i]) * (ll) (next[i] - i);
        }
        return ans % mod;
    }
};
