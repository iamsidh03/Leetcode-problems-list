class Solution {
    private int solve(String s,int k,char ch){
        int left=0;
        
        int maxlen=0;
        int cnt=0;
        for(int right=0;right<s.length();right++){
            
            if(s.charAt(right)==ch){
                cnt++;
            }
            while(cnt>k){
              if(s.charAt(left)==ch){
                cnt--;
            }  
            left++;
            }
            maxlen=Math.max(maxlen,right-left+1);
        }
        return maxlen;
    }
    public int maxConsecutiveAnswers(String answerKey, int k) {
        int maxTchange=solve(answerKey,k,'T');
        int maxFchange=solve(answerKey,k,'F');
        return Math.max(maxTchange,maxFchange);
    }
}