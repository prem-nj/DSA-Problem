class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counter(26, 0);
        if(s.length() != t.length()) return false; 
        int i = 0;
        int j = 0;
        int n = s.length();
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];
            char chi=s[i];
            counter[chi - 'a']++;
            counter[ch - 'a']--;
        }
        for (int i = 0; i < counter.size(); i++) {

            if (counter[i] != 0) {
                return false;
            }
        }
        return true;
    }
};