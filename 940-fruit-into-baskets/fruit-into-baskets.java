class Solution {
    public int totalFruit(int[] fruits) {
        Map<Integer,Integer> map= new HashMap<>();
        int n=fruits.length;
        int st=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            int f=fruits[i];
            map.put(f,map.getOrDefault(f,0)+1);
            
            while(map.size()>2){
                int x=fruits[st];
                map.put(x,map.get(x)-1);
                
                if(map.get(x)==0)map.remove(x);
                st++;
            }
            maxlen=Math.max(maxlen,i-st+1);
        }
        return maxlen;
    }
}