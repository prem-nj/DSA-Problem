class Solution {
public:
    bool iszero(unordered_map<char, int>& counter) {
        for (auto& pair : counter) { 
            if (pair.second != 0) {  
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string pat, string s2) {
        int m = pat.size();
        int n = s2.size();
        
        unordered_map<char, int> counter; // Correct declaration
        
        for (int i = 0; i < m; i++) {
            counter[pat[i]]++;
        }

        int j = 0, i = 0;

        while (j < n) {
            counter[s2[j]]--; 
            if (j - i + 1 == m) {
                if (iszero(counter)) { 
                    return true;
                }

                counter[s2[i]]++; 
                i++;
            }
            j++;
        }

        return false;
    }
};