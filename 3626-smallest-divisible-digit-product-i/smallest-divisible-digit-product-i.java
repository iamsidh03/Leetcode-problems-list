class Solution {
   private int digitProduct(int num){
    int prod=1;
    while(num>0){
        int digit=num%10;
        prod=prod*digit;
        num=num/10;
    }
    return prod;
   }
    public int smallestNumber(int n, int t) {
        
        while(true){
           if(digitProduct(n)%t==0){
            return n;
           }
           n++;
        }
    }
}