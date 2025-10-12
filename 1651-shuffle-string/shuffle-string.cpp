class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        vector<char>ans(n);
        int idx=-1;
        for(int i=0;i<n;i++){
            char ch=s[i];
            idx=indices[i];
            ans[idx]=ch;
        }
        string str="";
        for(auto &j:ans){
            str+=j;

        }
        // reverse(s.begin(),s.end());
        return str;
    }
};