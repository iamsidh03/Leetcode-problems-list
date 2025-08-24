class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
     int n=nums.size();
    if(n==1 &&nums[0]==0) return 1;
    
    vector<int>ans;
    int i=0;
     while(i<n){
       int countsub=0;
      
        if(nums[i]==0){
           
            while(i<n&&nums[i]==0 ){
                countsub++;
                
                i++;
            }
            ans.push_back(countsub);
           
        }
        else
        i++;
     }
        long long TotalSub=0;
     for(int i=0;i<ans.size();i++){
        TotalSub+=1LL*ans[i]*(ans[i]+1)/2;
     }
     return TotalSub;   
    }
};