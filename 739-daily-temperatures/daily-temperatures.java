class Pair {
    int index;
    int value;

    Pair(int index, int value) {
        this.index = index;
        this.value = value;
    }
}

class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        Stack<Pair> stack = new Stack<>();
        
        int n=temperatures.length;
        int []arr=new int[n];
        for(int i=n-1;i>=0;i--){

            while(!stack.empty()&& stack.peek().value<=temperatures[i]){
                stack.pop();
            }
            if(!stack.empty()){
                arr[i]=stack.peek().index-i;
            }
            stack.push(new Pair(i,temperatures[i]));

        }
        return arr;
    }
}