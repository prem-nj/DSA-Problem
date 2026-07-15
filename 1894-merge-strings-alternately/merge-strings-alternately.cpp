class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        string s;
        while(n1>0 && n2>0){
            s+=word1[word1.length()-n1];
            s+=word2[word2.length()-n2];
            n1--;
            n2--;
        }
        while(n1>0){
            s+=word1[word1.length()-n1];
            n1--;
        }
        while(n2>0){
            s+=word2[word2.length()-n2];
            n2--;
        }
        return s;
    }
};