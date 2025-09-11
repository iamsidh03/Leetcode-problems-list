class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>hash;
        for(char &i:t){
            hash[i]++;
        }
        int counter=t.size(); //it chech how many char I need now
        int len=INT_MAX;
        int head=0;
        int begin=0,end=0;

        while(end<s.size()){
            char ch=s[end];
            if(hash.count(ch)){
                hash[ch]--;
                if(hash[ch]>=0){
                    counter--;
                }
            }

            end++;
            while(counter==0){
                char temp=s[begin];
                if(hash.count(temp)){
                    hash[temp]++;
                    if(hash[temp]>0){
                        counter++;
                    }
                }
                
                if(end-begin<len){
                    len=end-begin;
                    head=begin;
                }
                begin++;
            }
        }
        return len==INT_MAX?"":s.substr(head,len);
        
    }
};