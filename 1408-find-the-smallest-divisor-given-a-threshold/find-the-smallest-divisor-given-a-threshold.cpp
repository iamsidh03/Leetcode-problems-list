class Solution {
public:
    bool possible(vector<int>&nums,int th,int n){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=((long long)nums[i]+n-1)/n;
        }
        return sum<=th;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(threshold<nums.size()) return -1;
     long long sumWith1 = 0;                     
        for (int x : nums) sumWith1 += x;
        if (sumWith1 <= threshold) return 1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,threshold,mid)){
               ans=mid;
               high=mid-1;
            }else{
                low=mid+1;
            }

            
            }
            return ans;
           
        
     
    }
};