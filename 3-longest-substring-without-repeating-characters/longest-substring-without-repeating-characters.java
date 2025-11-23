class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set =new HashSet<>();
        int st=0,end=0;

        // for(int i=0;i<s.length;i++){
        //     st.add(s.chatAt(i));
        // }
        int maxlen=0;
        while(end<s.length()){
            char c=s.charAt(end);

            while(set.contains(c)){
                set.remove(s.charAt(st));
                st++;
            }
            set.add(c);
            maxlen=Math.max(maxlen,end-st+1);
            end++;
        }
        return maxlen;
    }
}