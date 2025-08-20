class Solution {
public:
    int climbStairs(int n) {
        
        int first=1;
        int second=1;
        int third=1;
        for(int i=2;i<=n;i++){
            third=second+first;
            first=second;
            second=third;
        }
        return third;
    }
};