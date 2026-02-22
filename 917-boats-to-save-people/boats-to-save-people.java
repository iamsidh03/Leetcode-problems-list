class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);

        int st = 0;
        int end = people.length - 1;
        int cnt = 0;

        while (st <= end) {

            if (people[st] + people[end] <= limit) {
                cnt++;
                st++;
                end--;
            } 
            else {
                cnt++;
                end--;
            }

        }
        return cnt;
    }
}