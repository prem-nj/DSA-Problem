class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;  // safely handle INT_MIN
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        return power(x, exp);
    }

    double power(double x, long long n) {
        if (n == 0) return 1;

        double half = power(x, n / 2);
        double res = half * half;

        if (n % 2 == 1) {
            res *= x;
        }

        return res;
    }
};
