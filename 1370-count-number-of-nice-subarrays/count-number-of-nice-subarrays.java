/*
class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int n=nums.length;
        int finalcnt=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i;j<n;j++){
                if((nums[j]&1)==1){
                    cnt++;
                }
                if(cnt==k){
                    finalcnt++;
                    
                }
            }
        }
        return finalcnt;
    }
}
*/
class Solution {

    private int atMost(int[] nums, int k) {
        int st = 0;
        int count = 0;
        int oddcnt = 0;

        for (int end = 0; end < nums.length; end++) {

            if ((nums[end] & 1) == 1)
                oddcnt++;

            while (oddcnt > k) {
                if ((nums[st] & 1) == 1)
                    oddcnt--;
                st++;
            }

            count += end - st + 1;
        }

        return count;
    }

    public int numberOfSubarrays(int[] nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
}
