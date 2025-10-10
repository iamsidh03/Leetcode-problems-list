class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(int i=1;i<INT_MAX;i++){
            if(hash.find(i)==hash.end()){
                k--;
            }
            if(k==0) return i;
        }
        return -1;
    }
};