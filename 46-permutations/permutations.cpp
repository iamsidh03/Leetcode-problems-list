class Solution {
public:
        vector<vector<int>>result;
        unordered_set<int> st;
        
    void helper(vector<int>&nums,vector<int>&ans,int n){
        if(ans.size()==n){
            result.push_back(ans);
            return;
        }
        for(int i=0;i<n;i++){
            if(st.find(nums[i])==st.end()){ //set me nahi hai mtlb av explore nahi hua hai
            st.insert(nums[i]);
            ans.push_back(nums[i]);
            helper(nums,ans,n);

            //backtrack karo
            ans.pop_back();
            st.erase(nums[i]);

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        helper(nums,temp,n);
        return result;
    }
};