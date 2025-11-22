class Solution {
    public double findMaxAverage(int[] nums, int k) {
        //aproach Prefix sum
        int n=nums.length;
        int []prefix= new int[n+1];

        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        double maxsum=Integer.MIN_VALUE;
        for(int i=k;i<=n;i++){
           double sum=prefix[i]-prefix[i-k];
            maxsum=Math.max(sum,maxsum);
        }
        return maxsum/k;
    }
}