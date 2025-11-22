class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
           //sliding window approach

           //precalculating window element;
           int n=nums.size();
            double sum=0;
           for(int i=0;i<k;i++){
            sum+=nums[i];
           }   
           double maxsum=sum;
           for(int j=k;j<nums.size();j++){
            sum+=nums[j]-nums[j-k];
            maxsum=max(sum,maxsum);
           }
           return maxsum/k;
    }
};