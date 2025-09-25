class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string newstring="",revstring="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                char curr=tolower(s[i]);
                // newstring=newstring+curr;
                // revstring=curr+revstring;
                newstring.push_back(curr);      
                revstring.insert(revstring.begin(), curr); // prepend
            }
        }
        return newstring==revstring;
    }
};