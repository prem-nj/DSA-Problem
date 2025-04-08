class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        unordered_map<char, int> map;
        int count = 0;
        while (j < n) {
            map[s[j]]++;
            while (map.size() >= 3) {
                count+=n-j;
                map[s[i]]--;
                if (map[s[i]] == 0) {
                    map.erase(s[i]);
                }
                i++;
            }
        j++;
        }
        return count;
    }
};