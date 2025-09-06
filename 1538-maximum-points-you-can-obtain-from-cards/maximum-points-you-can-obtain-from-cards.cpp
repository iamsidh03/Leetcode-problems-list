class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long sum=0;
        //sliding window
        int n=cardPoints.size();
        if (k == n) { //edge case
            int total = 0;
            for (int x : cardPoints) total += x;
            return total;
        }
        //fist k ele. ka sum calculate karo
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        /* 
        Use a loop to move the "window":

        Remove one card from the left end (not first note it!).
        Add one card from the right end.    
         */
        long long ans=sum;
        int j=n-1;
        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[j--];
            ans=max(ans,sum);
        }
        return ans;

    }
};