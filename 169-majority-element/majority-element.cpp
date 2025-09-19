class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int candidate=arr[0];
        for(int i=0;i<n;i++){
            if(candidate==arr[i]){
                cnt++;
            }else{
                cnt--;
            }
            if(cnt<=0){
                candidate=arr[i];
                cnt++;
            }
        }
        return candidate;
    }
};