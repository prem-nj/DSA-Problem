class Solution {
public:
    int characterReplacement(string s, int k) {
        int j = 0, i = 0;
        int n = s.size();
        int maxi = INT_MIN;
        unordered_map<char, int> count;
        int maxfreq = 0;
        while (j < n) {
            char ch = s[j];
            count[ch]++;
            maxfreq = max(maxfreq, count[ch]);
            if (((j - i + 1) - maxfreq) > k) {
                while (((j - i + 1) - maxfreq) > k) {
                    count[s[i]]--;
                    maxfreq = 0;
                    for (auto it : count) {
                        maxfreq = max(maxfreq, it.second);
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