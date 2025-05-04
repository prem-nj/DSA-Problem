class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1;
        int e = num;
        if (num < 1) {
            return false;
        }

        while (s <= e) {
            long long m = s + (e - s) / 2;
            long long sqt = m * m;
            if (sqt < num) {
                s = m + 1;
            } else if (sqt > num) {
                e = m - 1;
            } else {

                return true;
            }
        }
        return false;
    }
};