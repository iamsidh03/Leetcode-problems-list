class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string small=strs[0];
        int small_str_len=small.length();
        int n=strs.size();
        string large=strs[n-1];
        string ans;
        for(int i=0;i<small_str_len;i++){
            if(small[i]!=large[i]){
                return ans;
            }
            ans+=small[i];
        }
        return ans;
    }
};