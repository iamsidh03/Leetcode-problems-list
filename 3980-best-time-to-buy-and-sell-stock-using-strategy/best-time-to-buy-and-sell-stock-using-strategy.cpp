/* 
approach:
first pre-computes two prefix sum arrays: one for the original profit and another for just the prices. This allows for constant-time calculation of sums over any range.

Then, it slides a window of size k across the array. For each possible modification, it calculates the new total profit by summing three parts:

Original profit before the window.

Original profit after the window.

The new profit inside the window (sum of prices for the last k/2 days).
 */
class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
         long long n=prices.size();
        vector<long long> pre(n);
        vector<long long> org(n);
        long long sum=0;
        long long osum=0;
        for(int i=0;i<n;i++){
            sum+=prices[i];
            pre[i]=sum;
            osum+=prices[i]*strategy[i];
            org[i]=osum; 
        }
        long long ans=org[n-1];

        for(long long i=k-1;i<n;i++){
            long long leftwithoutStrategySum=0;
            long long rightwithoutStrategySum=0;
            long long lastHalfwithStrategySum=pre[i]-pre[i-(k/2)];
            if(i-k>=0){
                leftwithoutStrategySum=org[i-k];
            }
            rightwithoutStrategySum=org[n-1]-org[i];
            ans=max(ans,rightwithoutStrategySum+leftwithoutStrategySum+lastHalfwithStrategySum);
        }
        return ans;
    }
};