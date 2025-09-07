class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
    int n=nums.size();
    // if(n==0)return {}
        /* if(nums.size()==1){
            if(nums[0]==target){
                return {0,0};
            }
                return {-1,-1};
            
        } */
        if (nums.empty()) return {-1, -1};

        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                int left=mid,right=mid;
                while(left - 1 >= 0&&nums[left-1]==target ){
                    if(nums[left]==target){
                        left--;
                    }
                }
                    while(right+1<n &&nums[right+1]==target){
                    if(nums[right]==target){
                        right++;
                    }
            
                }
                //   vector<int>ans({left,right});
                  return {left,right};
            }
            else if(nums[mid]<target){
                //search on right side
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {-1,-1};
    }
};