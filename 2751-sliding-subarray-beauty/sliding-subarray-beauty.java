/*
class Solution {
    public int[] getSubarrayBeauty(int[] nums, int k, int x) {
        int ans[]=new int[nums.length-k+1];

        for(int i=0;i<=nums.length-k;i++){
            List<Integer> neg=new ArrayList<>();

            for(int j=i;j<i+k;j++){
                if(nums[j]<0){
                    neg.add(nums[j]);
                }
                Collections.sort(neg);
                if(neg.size()>=x){
                    ans[i]=neg.get(x-1);
                }else{
                    ans[i]=0;
                }
            }
        }
        return ans;
    }
}
*/

class Solution {
    public int[] getSubarrayBeauty(int[] nums, int k, int x) {
        int ans[]=new int[nums.length-k+1];

        int []freq=new int[101];
        int left=0;
        for(int right=0;right<nums.length;right++){
            freq[nums[right]+50]++;
            if(right-left+1==k){
                int count=0;
                for(int i=0;i<50;i++){
                    count+=freq[i];
                    if(count>=x){
                        ans[left]=i-50;
                        break;
                    }
                } 
                    freq[nums[left]+50]--;
                    left++;
                

            }
        }
        return ans;
    }
}