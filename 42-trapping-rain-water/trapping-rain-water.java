class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int left[]= new int[n];
        int right[]= new int[n];
        int water=0;
        int leftMax=0,rightMax=0;
        for(int i=0;i<n;i++){
            if(height[i]>leftMax){
                leftMax=height[i];
            }
            left[i]=leftMax;
        }
        for(int i=n-1;i>=0;i--){
            if(height[i]>rightMax){
                rightMax=height[i];
            }
            right[i]=rightMax;
        }

        for(int i=0;i<n;i++){
            water+=(Math.min(left[i],right[i])-height[i]);
        }
        return water;
    }
}