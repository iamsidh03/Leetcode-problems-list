class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>hash;
    vector<int>ans;
       int n=nums.size();
       for(int i=0;i<n;i++){
             hash[nums[i]]++;
        }
       int majority=floor(n/3);
       for(auto &p:hash){
        if(p.second>majority){
            ans.push_back(p.first);
        }
       }
       return ans;
    }
};