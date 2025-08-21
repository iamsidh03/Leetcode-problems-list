class Solution {
public:
    int helper(vector<int>&coins,int amount,int index,vector<vector<int>>&dp){
        
        if(amount==0) return 0;
        if(amount<0||index>=coins.size()) return INT_MAX;
        if(dp[index][amount]!=-1) return dp[index][amount];

        int include=helper(coins,amount-coins[index],index,dp);
        if(include!=INT_MAX) include+=1;
        int exclude=helper(coins,amount,index+1,dp);

        return dp[index][amount]=min(include,exclude);

    }
    int coinChange(vector<int>& coins, int amount) {
        
        int size=coins.size();
        vector<vector<int>>dp(size+1,vector<int>(amount+1,-1));
        int ans=helper(coins,amount,0,dp);
        return ans!=INT_MAX?ans:-1;
    }
};