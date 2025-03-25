class Solution {
public:
    bool isSubsequence(string s, string t) {
    int coun=0,temp=0;
    int i=0;
    while(i<t.size() && coun<s.size()){
        if(t[i]==s[coun]){
        	coun++;
    }
    i++;
}
    if(coun==s.size()){
      return true;
    }else{ 
      return false;
    }
}
};
