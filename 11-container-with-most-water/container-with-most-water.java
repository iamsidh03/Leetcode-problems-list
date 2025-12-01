class Solution {
    public int maxArea(int[] height) {
        int i=0,j=height.length-1;
        int area=0;
        int maxarea=0;
        while(i<j){
            
            area=(int)Math.min(height[i],height[j])*(j-i);
            maxarea=Math.max(area,maxarea);
            if(height[i]>height[j]) j--;
            else i++;
           
        }
         return maxarea;
    }
}