class Solution {
public:
    int numSplits(string s){
        int l[30]={0},r[30]={0};
        int ld=0,rd=0,res=0;
        for(int i=0;i<s.size();i++){
            r[s[i]-'a']++;
            if(r[s[i]-'a']==1)rd++;
        }    
        for(int i=0;i<s.size();i++){
            if(ld==rd)res++;
            l[s[i]-'a']++;
            if(l[s[i]-'a']==1)ld++;
            r[s[i]-'a']--;
            if(r[s[i]-'a']==0)rd--;
        }
        return res;
    }
};
