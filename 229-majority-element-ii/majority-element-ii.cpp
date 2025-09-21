class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //using Morse algo
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        int mjt1=0,mjt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==mjt1){
                cnt1++;
            }else if(nums[i]==mjt2){
                cnt2++;
            }else if(cnt1==0){
                mjt1=nums[i];
                cnt1=1;
            }else if(cnt2==0){
                mjt2=nums[i];
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        // cout<<mjt1<<mjt2;
        vector<int>ans;
        int freq1=0;
        int freq2=0;
        for(int i:nums){
            if(mjt1==i) freq1++;
            else if(mjt2==i) freq2++;
        }
            if(freq1>floor(n/3)){
                ans.push_back(mjt1);
            }
            if(freq2>floor(n/3)){
                ans.push_back(mjt2);
            }
        
            return ans;
        

    }
};