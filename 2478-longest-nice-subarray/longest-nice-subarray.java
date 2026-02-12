/*
class Solution {
    private boolean  isNice(int []nums,int st,int end){
        int mask=0;

        for(int i=st;i<=end;i++){
            if((mask&nums[i])!=0){
                return false;
            }
            mask|=nums[i];
        }
        return true;
    }
    public int longestNiceSubarray(int[] nums) {
            int n=nums.length;
            int maxLen=0;
        for (int i = 0; i < n; i++) {
            int len=1;
            for (int j = i + 1; j < n; j++) {
                if (isNice(nums, i, j))
                   len=j-i+1;
                else
                    break;
            }
            maxLen=Math.max(maxLen,len);
        }
        return maxLen;
    }
}
*/
/*
class Solution {

    public int longestNiceSubarray(int[] nums) {
        int n = nums.length;
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            int mask = 0;
            for (int j = i; j < n; j++) {
                if ((mask & nums[j]) != 0)
                    break;
                mask |= nums[j];
                maxLen = Math.max(maxLen, j - i + 1);

            }

        }
        return maxLen;
    }
}
*/

class Solution {

    public int longestNiceSubarray(int[] nums) {

        int mask = 0;
        int st = 0;
        int n = nums.length;
        int maxlen = 0;
        for (int i = 0; i < n; i++) {

            //shrink the window and remove the value from the mask
            while ((mask & nums[i]) != 0) {
                mask ^= nums[st];
                st++;

            }
            mask |= nums[i];
            maxlen = Math.max(maxlen, i - st + 1);
        }
        return maxlen;
    }
}
