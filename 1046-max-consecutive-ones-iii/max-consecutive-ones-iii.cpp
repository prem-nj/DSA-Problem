class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int countzero = 0;
        int maxi = INT_MIN;

        while (j < n) {
            if (nums[j] == 0) {
                countzero++;
            }
            if (countzero > k) {
                while (countzero > k) {
                    if (nums[i] == 0) {

                        countzero--;
                    }
                    i++;
                }
            }

            maxi = max(maxi, j - i + 1);

            j++;
        }
        return maxi;
    }
};