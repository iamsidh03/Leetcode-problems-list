class Solution {
   
    public void  swap(char []s,int st,int end){
        char temp=s[st];
        s[st]=s[end];
        s[end]=temp;
    }
    public void reverseString(char[] s) {
        int st=0;int end=s.length-1;

        while(st<end){
            swap(s,st,end);
            st++;
            end--;
        }
    }
}