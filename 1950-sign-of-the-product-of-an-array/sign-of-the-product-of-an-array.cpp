class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 1;
        for (int num : nums) {
            if (num == 0) {
                return 0;
            }
            if (num > 0) {

                n *= 1;
               

            } else {
                n *= -1;
            }
        }
         return n;
    }
};