class Solution {
public:

    long long power(long long base, long long exponent) {
        const long long MOD = 1000000007;
        long long result = 1;

        while (exponent > 0) {

            if (exponent % 2 == 1) {
                result = (result * base) % MOD;
            }

            base = (base * base) % MOD;
            exponent = exponent / 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        const long long MOD = 1000000007;

        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;

        long long ans = (power(5, evenPos) * power(4, oddPos)) % MOD;

        return ans;
    }
};