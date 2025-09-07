class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size();

        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){ //tar probabily at right side
                low=mid+1;
            }else{
                high=mid; //left side
            }
        }
        return low;
    }
};