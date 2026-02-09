class Solution {
   static final long MOD = 1000000007L;
    private long modPow(long b, long p) {
        long res = 1;
        while (p > 0) {
            if ((p & 1) == 1) {
                res = (res * b) % MOD;
            }
            b=(b*b)%MOD;
            p>>=1;
        }
        return res;
    }

    private long modInverse(long val) {
        return modPow(val, MOD - 2);
    }

    public int countAnagrams(String s) {
        int MAX = 100000;
        long[] fact = new long[MAX+1];
        fact[0] = 1;
        for (int i = 1; i <= MAX; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }
        long ans = 1;
        int[] freq = new int[26];
        int wordLen = 0;
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s.charAt(i) == ' ') {
                long ways = fact[wordLen];

                for (int j = 0; j < 26; j++) {
                    if (freq[j] > 0) {
                        ways = (ways * modInverse(fact[freq[j]])) % MOD;
                        freq[j] = 0;
                    }
                }
                ans = (ans * ways) % MOD;
                wordLen = 0;
            } else {

                freq[s.charAt(i) - 'a']++;
                wordLen++;
            }
        }
        return (int) ans;
    }
}