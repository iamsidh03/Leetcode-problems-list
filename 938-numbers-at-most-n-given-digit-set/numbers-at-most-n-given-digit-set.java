class Solution {
    public int atMostNGivenDigitSet(String[] digits, int n) {

        String num = String.valueOf(n);
        int len = num.length();
        int D = digits.length;

        int result = 0;

        // PART 1: count numbers with fewer digits than n
        for (int i = 1; i < len; i++) {
            result += Math.pow(D, i);
        }

        // PART 2: count numbers with same length as n
        for (int i = 0; i < len; i++) {
            boolean sameDigitFound = false;

            for (String d : digits) {
                if (d.charAt(0) < num.charAt(i)) {
                    result += Math.pow(D, len - i - 1);
                } else if (d.charAt(0) == num.charAt(i)) {
                    sameDigitFound = true;
                    break;
                }
            }

            if (!sameDigitFound) {
                return result;
            }
        }

        return result + 1;
    }
}