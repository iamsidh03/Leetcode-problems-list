// 2 3 2  
//   sum 2   [3 2]
    //   sum 3  [2]
    //        sum 2  sum 0

// start from 0 to n-1
// strart from 1 to n 
// whichever is my maximum is my answer
class Solution {
public:
//     int helper(vector<int>&nums,int size,int index,vector<int>&dp){
//         if(index>=size){
//             return 0;
//         }
//         if(dp[index]!=-1) return dp[index];
//         int rob=nums[index]+helper(nums,size,index+2,dp);
       
//         int skip=helper(nums,size,index+1,dp);

//         return dp[index]=max(rob,skip);
// }
//  0 1 2 3 
//  1 2 3 1
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int>dp1(size+2,-1);
        vector<int>dp2(size+2,-1);
        dp1[size]=dp1[size-1]=0; //0 to size-1
        dp2[size]=dp2[size+1]=0; //1 to size+1
        if(size==1){
            return nums[0];
        }
        for(int i=size-2;i>=0;i--){ // 0 to size-2
            dp1[i]=max(nums[i]+dp1[i+2],dp1[i+1]);
        }
        for(int i=size-1;i>0;i--){
            dp2[i]=max(nums[i]+dp2[i+2],dp2[i+1]);
        }
        return max(dp1[0],dp2[1]);
    }
};