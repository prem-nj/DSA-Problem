class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i= 0;
        string word = "";
        string ans = "";
        while (i< n) {
            // remove leading space
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i >= n) {
                break;
            }
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (!ans.empty()) {
                ans += " ";
            }
            ans += word;
            word="";
        }
    return ans;}
};