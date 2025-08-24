class Solution {
public:
   
    /* vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans(2);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return vector<int>{i,j};
                    // return {i,j};
                }
            }
        }
     return vector<int>{-1,-1};;
    //  return {};
    } */


    // //Better using HashMap
    // store the value in hashTable
    // if that value found in hash table then return the starting index i.e 
    // mp[comp] to current value ka index i.e i
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int comp=target-nums[i];
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }


};