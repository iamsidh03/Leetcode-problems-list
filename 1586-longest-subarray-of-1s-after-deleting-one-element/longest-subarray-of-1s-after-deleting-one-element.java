class Solution {
    public int longestSubarray(int[] nums) {

        int maxlen = 0;
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            int zeroCount = 0;

            for (int j = i; j < n; j++) {
                if (nums[j] == 0) {
                    zeroCount++;
                }

                if (zeroCount > 1) {
                    break;
                }

                // length after deleting one element
                maxlen = Math.max(maxlen, j - i);
            }
        }

        return maxlen;
    }
}
