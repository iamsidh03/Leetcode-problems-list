class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int i=0,j=0;
        int minLen=nums.length;
        long sum=0;
        long reachTarget=0;
        while(j<nums.length){
            sum+=nums[j];
            reachTarget+=nums[j];
            while(sum>=target){
                minLen=Math.min(minLen,j-i+1);
                sum-=nums[i];
                i++;

            }
            j++;
        }
        if(reachTarget<target)return 0;
        return minLen;
    }
}