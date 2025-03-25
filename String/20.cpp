class Solution {
public:
    bool isValid(string s) {
            stack <char> st;
            st.push('a');
            for(int i=0;i<s.length();i++){
                if(s[i]=='(' || s[i]=='{'||s[i]=='[') st.push(s[i]);
                else{
                    char top = st.top();
                    if((s[i]==')'&& top=='(')||(s[i]=='}'&& top=='{')||(s[i]==']'&& top=='['))
                    st.pop();
                    else return false;
                }
            }
            return (st.top()=='a');
    }
};
