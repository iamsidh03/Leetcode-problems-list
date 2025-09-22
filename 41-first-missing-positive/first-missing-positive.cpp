class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                map.insert(nums[i]);
            }
        }
        int smallestMissingNumber=1;

        while(true){
            if(map.find(smallestMissingNumber)==map.end()){
                return smallestMissingNumber;
            }
            smallestMissingNumber++;
        }

        return -1;
    }
};