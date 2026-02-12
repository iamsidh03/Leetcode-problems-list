class Solution {
    public int findPairs(int[] nums, int k) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int cnt=0;
        for(int num:nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        if(k==0){
            //dono element equal hone chahiye tabhi 
            for(int n:map.values()){
                if(n>=2)cnt++;
            }
        }
        else{
            for(int n:map.keySet()){
                
                if(map.containsKey(n+k))cnt++;
            }
        }
        return cnt;
    }
}