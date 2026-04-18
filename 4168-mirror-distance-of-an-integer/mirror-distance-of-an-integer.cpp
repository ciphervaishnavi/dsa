class Solution {
public:
    int rev(int n) {
        int res = 0;

        while (n > 0) {
            int digit = n % 10;
            res = res * 10 + digit;
            n /= 10;
        }

        return res;
    }

    int mirrorDistance(int n) {
        return abs(n - rev(n));
    }
};