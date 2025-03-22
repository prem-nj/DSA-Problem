#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMinSwaps(string num, int k) {
        int n = num.size();
        string original = num;

        // Generate k-th permutation
        while (k--) {
            int pivot = -1;
            for (int i = n - 1; i > 0; i--) {
                if (num[i - 1] < num[i]) {
                    pivot = i - 1;
                    break;
                }
            }

            if (pivot != -1) {
                int swap_i = pivot;
                for (int i = n - 1; i > pivot; i--) {
                    if (num[i] > num[pivot]) {
                        swap_i = i;
                        break;
                    }
                }
                swap(num[swap_i], num[pivot]);
                reverse(num.begin() + pivot + 1, num.end());
            }
        }

        // Count minimum adjacent swaps
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (original[i] != num[i]) {
                int j = i + 1;
                while (j < n && original[j] != num[i]) j++;

                while (j > i) {
                    swap(original[j], original[j - 1]);
                    count++;
                    j--;
                }
            }
        }

        return count;
    }
};
