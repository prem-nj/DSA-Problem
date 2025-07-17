class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int n = blocks.length();
        int count_w = 0;
        int mini = INT_MAX;
        int j = 0, i = 0;
        while (j < n) {
            if (blocks[j] == 'W') {
                count_w++;
            }

            if (j-i+1== k) {
                mini = min(mini, count_w);
                if (blocks[i] == 'W') {
                    count_w--;
                }
                i++;
            }

            j++;
        }
        return mini;
    }
};
