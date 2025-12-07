class Solution {
    public boolean find132pattern(int[] nums) {
        int n= nums.length;
        if(n<3)return false;
        int num3=Integer.MIN_VALUE;
        Stack<Integer> st=new Stack<>();
        for(int i=n-1;i>=0;i--){
            if(nums[i]<num3)return true;
            while(!st.empty() && st.peek()<nums[i]){
                num3=st.peek();
                st.pop();
            }
            st.push(nums[i]);
        }

        return false;
    }
}