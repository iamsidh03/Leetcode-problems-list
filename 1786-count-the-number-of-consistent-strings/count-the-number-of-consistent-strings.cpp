class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool>seen(26,false);
        for(char ch:allowed){
            seen[ch-'a']=true;
        }
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            bool consistent = true;
            for(char ch:str){
                if(!seen[ch-'a']){
                    consistent = false;
                    break;
                }

            }
            if (consistent) cnt++;
        }
        return cnt;
    }
};