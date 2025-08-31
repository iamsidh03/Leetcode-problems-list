class Solution {
public:
    bool possible(vector<int>&weights,int wt,int days){
        int d=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>wt){
                d+=1;
                sum=0;
                
            }
            sum += weights[i];
        if (d > days) return false;
           
        }
        return true;;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i:weights) high+=i;
        
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};