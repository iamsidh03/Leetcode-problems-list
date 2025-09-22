class Solution {
public:
// O(n)
vector<int> sortedSquares(vector<int>& nums) {
           
            int n=nums.size();
             vector<int>ans(n);
             int l=0,r=n-1,k=n-1;
             while(l<=r){
                if(abs(nums[l])>abs(nums[r])){
                    ans[k]=pow(nums[l],2);
                    l++;
                }else{
                    ans[k]=pow(nums[r],2);
                    r--;
                }
                k--;
             }
             return ans;
}

};
    /* vector<int> sortedSquares(vector<int>& nums) {
            vector<int>ans;
     for(int i=0;i<nums.size();i++){
        int sq=pow(nums[i],2);
        ans.push_back(sq);
     }  
     sort(ans.begin(),ans.end());
     return ans; 
    } */
