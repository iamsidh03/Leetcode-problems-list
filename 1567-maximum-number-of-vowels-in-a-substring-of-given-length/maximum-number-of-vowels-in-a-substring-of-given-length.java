class Solution {
    public boolean isVowel(char ch){
       return switch(ch){
            case 'a','i','o','u','e' ->true;
            default ->false;
        };
    }
    public int maxVowels(String s, int k) {
       int cntvowel=0;
       for(int i=0;i<k;i++){
        if(isVowel(s.charAt(i))){
            cntvowel++;
        }
       }
       int maxcnt=cntvowel;
       for(int i=k;i<s.length();i++){
        if(isVowel(s.charAt(i-k))){
            cntvowel--;
        }
        if(isVowel(s.charAt(i))){
            cntvowel++;
        }
        maxcnt=Math.max(cntvowel,maxcnt);
       }
       return maxcnt;


    }
}