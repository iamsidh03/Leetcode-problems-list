class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> st= new HashSet<>();
        int i=0;
        while(i<nums.length){
            if(st.contains(nums[i])) return nums[i];
            st.add(nums[i]);
            i++;

        }
        return -1;
    }
}