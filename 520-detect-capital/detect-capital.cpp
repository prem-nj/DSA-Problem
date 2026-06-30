class Solution {
public:
    bool detectCapitalUse(string word) {
        int countcap=0;
        for(char ch:word){
            if(isupper(ch)){
                countcap++;
            }
        }
        if(countcap==word.length() || countcap==0 ||(countcap==1 && isupper(word[0]))){
            return true;
        }
        return false;
    }
};