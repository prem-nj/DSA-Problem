class Solution {
  public:

    string removeUtil(string &s) {

        string temp = "";
        int i = 0;

        while (i < s.length()) {

            // Check duplicate group
            if (i + 1 < s.length() && s[i] == s[i + 1]) {

                char ch = s[i];

                // Skip entire duplicate block
                while (i < s.length() && s[i] == ch) {
                    i++;
                }
            }
            else {
                temp.push_back(s[i]);
                i++;
            }
        }

        // If no change, stop recursion
        if (temp.length() == s.length()) {
            return temp;
        }

        return removeUtil(temp);
    }
};