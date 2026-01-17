class Solution {
    boolean palindrom(String str,int s,int e){
        if(s>=e)return true;
        if(str.charAt(s)!=str.charAt(e))return false;
       return palindrom(str,s+1,e-1);
    }
    public String firstPalindrome(String[] words) {
        for(String s:words){
            if(palindrom(s,0,s.length()-1)) return s;
        }
        return "";
    }
}