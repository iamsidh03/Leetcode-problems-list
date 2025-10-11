class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int write=0;
        int cnt;
        while(i<n){
           char curr=chars[i];
            cnt=0;
            while(i<n &&chars[i]==curr){
                cnt++;
                i++;
            }
            chars[write++]=curr;
            if(cnt>1){
                string cntstr=to_string(cnt);
                for(char c:cntstr){
                    chars[write++]=c;
                }
            }

        }
        return write;
    }
};