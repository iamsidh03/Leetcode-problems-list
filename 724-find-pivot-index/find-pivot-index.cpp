class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n=nums.size();
    //   int zerosum=accumulate(nums.begin(),nums.end(),0);
    //   if(zerosum==0) return 0;
      vector<int>prefixsum(n,0);
        int sum=0;
      for(int i=0;i<n;i++){
        sum+=nums[i];
        prefixsum[i]=sum;
      }  
      int pivotidx=-1;
      int leftsum=0,rightsum=0;
      for(int i=0;i<n;i++){
        leftsum=(i!=0)?prefixsum[i-1]:0;
       
        rightsum=prefixsum[n-1]-prefixsum[i];
        if(leftsum==rightsum){
            return i;
        }
      }
      return -1;
    }
};