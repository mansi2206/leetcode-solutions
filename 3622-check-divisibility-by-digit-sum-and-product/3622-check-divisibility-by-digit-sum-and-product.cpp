class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int org = n;
        while (n > 0) {
            int dgt = n % 10;
            sum += dgt;
            prod *= dgt;
            n /= 10;
        }
        int x = sum + prod;

        if (org % x == 0) {
            return true;
        }
        return false;
    }
};