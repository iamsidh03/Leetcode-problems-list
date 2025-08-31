class Solution {
public:
    bool possible(vector<int>&bloomDay,int m,int k,int day){
        int noOfBqt=0;
        int cnt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(day>=bloomDay[i]){
                cnt++;
            }else{
              noOfBqt+=(cnt/k);  
              cnt=0;
            }
        }
        noOfBqt+=(cnt/k);  
        return noOfBqt>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int size=bloomDay.size();
        if(val>size) return -1;

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,m,k,mid)){
                    ans=mid;
                    high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;

    }
};