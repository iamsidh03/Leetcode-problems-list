class Solution {
    public int findPairs(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int n : nums) {
            map.put(n, map.getOrDefault(n, 0) + 1);
        }
        int cnt = 0;

        if (k == 0) {
            //freq >1

            for (int freq : map.values()) {
                if (freq > 1)
                    cnt++;
            }
        } else {
            for (int n : map.keySet()) {
                if (map.containsKey(n + k)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
}