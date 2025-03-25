class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        stack<int> st;
        vector<int> v(nums2.size(),-1);
        v[nums2.size()-1] = -1;
        st.push(nums2[nums2.size()-1]);
        for(int i = nums2.size()-2; i >= 0; i--){
            if(nums2[i] > st.top()){
                while(!st.empty() && nums2[i] > st.top()){
                    st.pop();
                }
                if(st.empty()){
                    v[i] = -1;
                    st.push(nums2[i]);
                }else{
                    v[i] = st.top();
                    st.push(nums2[i]);
                }
            }else if(nums2[i] < st.top()){
                v[i] = st.top();
                st.push(nums2[i]);            
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]] = v[i];
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
