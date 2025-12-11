class Solution {
    public int[][] divideArray(int[] nums, int k) {
        Arrays.sort(nums);
        int n=nums.length;
        int subarr=n/3;
        int high=2;
        int low=0;
        // int [][]matrix=new int[sublen][sublength]
        List<int[]>res=new ArrayList<>();
            int i=0;
            while(high<n){
                if(nums[high]-nums[low]<=k){
                    res.add( new int[]{nums[low],nums[low+1],nums[low+2]});
                }
                high+=3;
                low+=3;
            }
            if(res.size()==subarr){
               return res.toArray(new int[res.size()][]);
            }
           return new int[][] {};

    }
}