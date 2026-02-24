class Solution {
    public boolean isHappy(int n) {
        Set<Integer> st= new HashSet<>();
        while(!st.contains(n)){
            st.add(n);
            n=nextNumber(n);
            if(n==1) return true;

        }
        return false;
    }
    private int nextNumber(int n){
        int output=0;
        while(n>0){
           int dig=n%10;
            output+=dig*dig;
            n/=10;
        }
        return output;
    }
}