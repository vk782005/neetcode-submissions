class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return false;}
        map<char,int>f1;
        map<char,int>f2;
        for(int i=0;i<s.length();i++){
            f1[s[i]]++;
            f2[t[i]]++;
        }
        for(auto &it:f1){
            if(f2[it.first]!=f1[it.first]){return false;}
        }
        return true;
    }
};
