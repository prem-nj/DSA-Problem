class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (m > n) {
            return "";
        }
        unordered_map<char, int> map;
        int j = 0, i = 0;
        for (char& ch : t) {
            map[ch]++;
        }
        int req_cnt = m;
        int start_i = -1;
        int minwindow = INT_MAX;
        while (j < n) {
            if (map[s[j]] > 0) {
                req_cnt--;
            }
            map[s[j]]--;

            while (req_cnt == 0) {
                // shrink
                if (minwindow > j - i + 1) {
                    minwindow = j - i + 1;
                    start_i = i;
                }
                map[s[i]]++;
                if (map[s[i]] > 0) {
                    req_cnt++;
                }
                    i++;
            }
            j++;
        }

        return minwindow == INT_MAX? "" : s.substr(start_i, minwindow);
    }
};