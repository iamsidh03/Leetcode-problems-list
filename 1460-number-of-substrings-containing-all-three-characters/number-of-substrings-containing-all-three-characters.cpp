class Solution {
public:
    int numberOfSubstrings(string s) { 
        int cnt=0;
        unordered_map<char,int>hash={{'a',0},{'b',0},{'c',0}};
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            hash[s[i]]++;
            while(hash['a']>0 &&hash['b']>0 &&hash['c']>0){
                cnt+=n-i;
                hash[s[j]]--;
                j++;
            }
        }
        return cnt;
    }
};