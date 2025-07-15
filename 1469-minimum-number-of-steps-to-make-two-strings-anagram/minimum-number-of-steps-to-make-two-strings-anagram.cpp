class Solution {
public:
    int minSteps(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        vector<int> counter(26, 0);

        for (int i = 0; i < n1; i++) {
            counter[s[i]-'a']++;
            counter[t[i]-'a']--;
        }
        int cnt = 0;
        
        for (int j = 0; j < 26; j++) {
            if (counter[j] >0){
            cnt+=counter[j];
        }
        }
        return cnt;
    }
};