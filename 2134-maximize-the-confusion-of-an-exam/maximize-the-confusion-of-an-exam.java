class Solution {
    public int maxConsecutiveAnswers(String answerKey, int k) {

        int left = 0;
        int maxLen = 0;

        int countT = 0;
        int countF = 0;

        for (int right = 0; right < answerKey.length(); right++) {

            // Expand window
            if (answerKey.charAt(right) == 'T') {
                countT++;
            } else {
                countF++;
            }

            // If more than k changes are required, shrink window
            while ((right - left + 1) - Math.max(countT, countF) > k) {

                if (answerKey.charAt(left) == 'T') {
                    countT--;
                } else {
                    countF--;
                }
                left++;
            }

            // Update max length
            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }
}
