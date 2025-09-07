class Solution {
public:
    bool isAnagram(string s, string t) {
        //without sorting O(N)
        int slen=s.length();
        int tlen=t.length();
        if(slen!=tlen) return false;
        vector<int>sfreq(26,0),tfreq(26,0);
        for(int i=0;i<slen;i++){
            int sidx=s[i]-'a';
            int tidx=t[i]-'a';
            sfreq[sidx]++;
            tfreq[tidx]++;

        }
        //ligic is that if they are anagram
        // the frequescy of each character must be same at that particular index
        for(int i=0;i<26;i++){
            if(sfreq[i]!=tfreq[i])return false;
        }
        return true;
    }
};