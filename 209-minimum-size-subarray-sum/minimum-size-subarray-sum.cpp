class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int len=INT_MAX;
        int n=nums.size();
        int sum=0;
        while(j<n){
            sum+=nums[j];
            
                
                while(sum>=target){
                    len=min(len,j-i+1);
                    sum-=nums[i++];// decrease the window size
                }
                 j++; //increase your window size
            }
               
            
        
        return len==INT_MAX?0:len;
    }
};