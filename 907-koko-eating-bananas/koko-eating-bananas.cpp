class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; int high=*max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid=low+(high-low)/2;
            long long time=0;

            for(int pile:piles){
              time+=((long long)pile+mid-1)/mid;
            }
            if(time<=h){
                //try with slower k value
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};