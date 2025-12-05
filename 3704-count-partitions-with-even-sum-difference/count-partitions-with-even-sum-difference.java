class Solution {
    public int countPartitions(int[] nums) {
       int n=nums.length;
        int[] pre=new int[n];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre[i]=sum;
        }
        // for(int c:pre){
        //     System.out.println(c);
        // }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int lt=pre[i];
            int rt=pre[n-1]-pre[i];
            if((rt-lt)%2==0){
                //  System.out.println(lt+" "+rt);
                cnt++;
        }
        }
        return cnt;
    }
}