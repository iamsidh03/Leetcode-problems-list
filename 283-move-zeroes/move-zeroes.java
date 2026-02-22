class Solution {
    void swap(int []nums,int a,int b){
       int temp=nums[a];
       nums[a]=nums[b];
       nums[b]=temp;
    }
    public void moveZeroes(int[] nums) {
    int startIdx=-1;
    int n=nums.length;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            startIdx=i;    
            break;
        }
    }
     if(startIdx == -1) return;

    int j=startIdx+1;
    while(j<n){
        if(nums[j]!=0){
            swap(nums,startIdx,j);
             startIdx++;
            
        }
       
        j++;
    }
    
    
    }
}