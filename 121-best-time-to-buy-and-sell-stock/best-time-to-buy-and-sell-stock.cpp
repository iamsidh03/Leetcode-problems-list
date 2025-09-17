class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN;
        int buy=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            int sell=prices[i]-buy;
            maxprofit=max(sell,maxprofit);
        }
        return maxprofit;
            
    }
    
};