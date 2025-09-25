class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
          hash[nums[i]]++;  
        }
        for(auto i:hash){
            if(i.second>1){
                return i.first;
            }
        }
        return -1;
    }
};