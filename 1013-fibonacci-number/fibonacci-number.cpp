class Solution {
public:
// int ans(int a,int b){
//     if(a==0) return 0;
//     if
// }
    int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);    
    }
};