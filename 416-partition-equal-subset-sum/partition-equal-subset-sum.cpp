class Solution {
public:
   /*  bool SubSetSum(vector<int>&nums,int sum,int size){
        if(sum==0) return true;
        if(size==0) return false;

        if(nums[size-1]<=sum){
            return SubSetSum(nums,sum-nums[size-1],size-1) ||
                    SubSetSum(nums,sum,size-1);
        }
        else{
            return  SubSetSum(nums,sum,size-1);
        
        }
    } */
    //memoization
     bool SubSetSum(vector<int>&nums,int sum,int size,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(size==0) return false;
        if(dp[size][sum]!=-1) return dp[size][sum];
        if(nums[size-1]<=sum){
            dp[size][sum]= SubSetSum(nums,sum-nums[size-1],size-1,dp) ||
                    SubSetSum(nums,sum,size-1,dp);
        }
        else{
          dp[size][sum]=  SubSetSum(nums,sum,size-1,dp);
        
        }
         return dp[size][sum];
    }
    bool canPartition(vector<int>& nums) {
        int size=nums.size();
        int sum=0;
        for(int i=0;i<size;i++){
                sum+=nums[i];
        }
        if(sum%2==0){
            
        vector<vector<int>>dp(size+1,vector<int>((sum/2)+1,-1));
        return  SubSetSum(nums,sum/2,size,dp);
        }
        return false;
        
    }
};