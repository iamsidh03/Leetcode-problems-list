class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        
        List<Integer> ll=new ArrayList<>();
        Map<Character,Integer> map= new HashMap<>();
        int st=0;int end=0;
        int n =s.length();
        for(int i=0;i<p.length();i++){
            char ch=p.charAt(i);
            map.put(ch,map.getOrDefault(ch,0)+1);
            
        }
        int counter=map.size();

        while(end<n){
            char ch=s.charAt(end);
            if(map.containsKey(ch)){
                    map.put(ch,map.getOrDefault(ch,0)-1);
                if(map.get(ch)==0){
                    counter--;
                }
            }
            end++;
            while(counter==0){
                if(end-st==p.length()){
                    ll.add(st);
                }
                char temp=s.charAt(st);
                if(map.containsKey(temp)){
                    map.put(temp,map.getOrDefault(temp,0)+1);
                    if(map.get(temp)>0){
                        counter++;
                    }
                }

                st++;
            }
        }
        return ll;
    }
}