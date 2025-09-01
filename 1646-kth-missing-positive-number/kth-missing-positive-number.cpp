class Solution {
public:
   bool search(vector<int>&arr,int ele){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==ele)return true;
        if(arr[mid]>ele){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
   }
    int findKthPositive(vector<int>& arr, int k) {
    //  vector<int>missingarray(1000,0);
    int cnt=0;
    int upperLimit = arr.back() + k;
      for(int i=1;i<=upperLimit;i++){
        if(!search(arr,i)){
            cnt++;
        }
        if(cnt==k){
            return i;
        }
      }
      return -1;  
    }
};