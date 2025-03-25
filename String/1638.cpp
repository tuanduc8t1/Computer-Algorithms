class Solution {
public:
    int countSubstrings(string s, string t){
        int check=0,ans=0;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<t.size(); j++){
                check=0;
                for(int k=0;k<min(s.size()-i,t.size()-j); k++){
                    if(s[i+k]!=t[j+k])check++;
                    if(check==2)break;
                    else if(check==1)ans++;
				} 
            }
        }
        return ans;
}
};
