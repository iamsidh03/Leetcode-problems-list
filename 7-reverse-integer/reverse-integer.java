class Solution {

    public int reverse(int x) {
        long rev=0;
        boolean neg=(x<0);
        if(neg){
            x=x*-1;
        }
        while(x>0){
            int dig=x%10;
            rev=(rev*10)+dig;
            x/=10;
        }
        if(rev>Integer.MAX_VALUE||rev<Integer.MIN_VALUE) return 0;
        if(neg){
            rev=rev*-1;
        }
        return (int)rev;
    }
}