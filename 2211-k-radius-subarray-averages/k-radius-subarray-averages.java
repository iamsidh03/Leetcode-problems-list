class Solution {
    public int[] getAverages(int[] nums, int k) {

        int n = nums.length;
        int[] ans = new int[n];
        Arrays.fill(ans, -1);

        // Special case: k == 0
        if (k == 0) return nums;

        // If window size is larger than array
        if (n < 2*k + 1) return ans;

        int left = 0;
        int right = 2 * k;
        long windowSum = 0;
        int idx = k;

        // Initial window sum
        for (int i = 0; i <= right; i++) {
            windowSum += nums[i];
        }

        // First average (FIXED CAST)
        ans[idx++] = (int)(windowSum / (2*k + 1));
        right++;

        // Slide the window
        while (right < n) {
            windowSum += nums[right] - nums[left];
            ans[idx++] = (int)(windowSum / (2*k + 1));
            right++;
            left++;
        }

        return ans;
    }
}
