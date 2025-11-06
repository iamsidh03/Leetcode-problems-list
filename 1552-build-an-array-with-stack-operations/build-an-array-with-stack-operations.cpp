class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res ;
        int j = 0 , i = 1 ;
     while(j<target.size() && i<=n) {
            if(target[j]!=i) {
                res.push_back("Push");
                res.push_back("Pop");
            }
            else {
                res.push_back("Push");
                j++;
            }
            i++;
     }  return res ;  
    }
};