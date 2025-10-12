class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end()); //sort the string 
            // if this sort string is not presnent then add them in map as key
            // if(map.find(s)==map.end()){ // not present in map
                map[s].push_back(strs[i]);

           
            
            
            }
           
            vector<vector<string>> ans;
            for (auto &entry : map) {
            ans.push_back(entry.second);
        }
            return ans;
        
    }
};