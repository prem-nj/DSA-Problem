class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int maxi = 0;
        int countzero = 0;
        while (j < n) {
            if (nums[j] == 0) {
                countzero++;
            }


            if (countzero > 1) {
                while (countzero > 1) {
                    if (nums[i] == 0) {
                        countzero--;
                    }
                    i++;
                }
            }
            

            maxi = max(maxi, j - i + 1);
            
                
            j++;
        }

        return maxi - 1;
    }
};