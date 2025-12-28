class Solution {
    public double findMaxAverage(int[] nums, int k) {
        //pre Calculating the value first
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxsum=sum;
        for(int j=k;j<nums.length;j++){
            sum-=nums[j-k];
            sum+=nums[j];
            maxsum=Math.max(sum,maxsum);
        }
        return (double)maxsum/k;
    }
}