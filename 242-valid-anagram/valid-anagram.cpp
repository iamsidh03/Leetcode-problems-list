class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(t),end(t));
        sort(begin(s),end(s));
        int slen=s.length();
        int tlen=t.length();
        if(slen!=tlen)return false;
        for(int i=0;i<slen;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};