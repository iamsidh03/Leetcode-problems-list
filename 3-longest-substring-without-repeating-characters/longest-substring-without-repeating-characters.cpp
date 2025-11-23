class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        // int hash[255]={0};
        vector<int> hash(255,0);
        for(int i=0;i<s.size();i++){
        //    fill(hash,hash+255,0);
        fill(hash.begin(),hash.end(),0);
            int len=0;
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1) break;
                len=j-i+1;
                maxlen=max(maxlen,len);
                hash[s[j]]=1;
            }
        }
        return maxlen;
    }
};