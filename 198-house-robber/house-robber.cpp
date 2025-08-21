class Solution {
public:
    int helper(vector<int>&nums,int i,int s,vector<int>&dp){
        if(i>=s)return 0;

        if(dp[i]!=-1){
            return dp[i];
        }
        int rob=nums[i]+helper(nums,i+2,s,dp);

        int skip=helper(nums,i+1,s,dp);
        return dp[i]=max(rob,skip);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+2,-1);
        return helper(nums,0,nums.size(),dp);
    }
};