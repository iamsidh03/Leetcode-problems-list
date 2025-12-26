class Solution {
    public int jump(int[] nums) {
        int jump=0,j=0,k=0;
        for(int i=0;i<nums.length-1;i++){
            j=Math.max(j,i+nums[i]);
            if(i==k){
                k=j;
                jump++;
               
            }
        }
        return jump;
    }
}