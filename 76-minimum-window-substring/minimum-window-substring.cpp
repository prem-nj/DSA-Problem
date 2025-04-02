class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0;
        int n = s.size();
        int m = t.size();
        // edge case
        if (m > n) {
            return "";
        }
        int start_i = -1;
        int mini = INT_MAX;
        unordered_map<char, int> map;
        for (int i = 0; i < m; i++) {
            map[t[i]]++;
        }
        int req_cnt = m;
        while (j < n) {
            if (map[s[j]] > 0) {
                req_cnt--;
            }
            map[s[j]]--;
            while (req_cnt == 0) {

                mini = min(mini, j - i + 1);
                if (mini == j - i + 1)
                    start_i = i;
                // shrink
                map[s[i]]++;
                if (map[s[i]] > 0) {
                    req_cnt++;
                }
                i++;
            }
            j++;
        }

        return (mini == INT_MAX) ? "" : s.substr(start_i, mini);
    }
};