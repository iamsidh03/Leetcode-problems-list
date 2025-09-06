class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>parr;
        vector<int>narr;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                narr.push_back(nums[i]);
            }else{
                parr.push_back(nums[i]);
            }
        }
        int pi=0,ni=0,i=0;
        while (pi < parr.size() && ni < narr.size()) {
            ans[i++] = parr[pi++];
            ans[i++] = narr[ni++];
        }
        return ans;
    }
};