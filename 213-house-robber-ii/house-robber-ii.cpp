// 2 3 2  
//   sum 2   [3 2]
    //   sum 3  [2]
    //        sum 2  sum 0

// start from 0 to n-1
// strart from 1 to n 
// whichever is my maximum is my answer
class Solution {
public:
    int helper(vector<int>&nums,int size,int index,vector<int>&dp){
        if(index>=size){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int rob=nums[index]+helper(nums,size,index+2,dp);
       
        int skip=helper(nums,size,index+1,dp);

        return dp[index]=max(rob,skip);
}
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int>dp1(size+1,-1);
        vector<int>dp2(size+1,-1);
        if(size==1){
            return nums[0];
        }
        return max(helper(nums,size-1,0,dp1),helper(nums,size,1,dp2));
    }
};