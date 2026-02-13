class Solution {
    public int findPairs(int[] nums, int k) {
        // Set<String> seen =new HashSet<>();
        Arrays.sort(nums); 
        int cnt=0;
        for(int i=0;i<nums.length;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int tar=nums[i]+k;
            if(bs(nums,i+1,nums.length-1,tar)){
                cnt++;
            }
           
        }
        return cnt;
    }
    private boolean bs(int []nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;

            if(nums[mid]==target) return true;
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return false;
    }
}