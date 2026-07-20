class Solution {
public:
    bool isvowel(char ch){
     if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        return true;
     }
     return false;
    }
    string reverseVowels(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<e){
            if(!isvowel(s[e])){
                e--;
            }else if(!isvowel(s[st])){
                st++;
            }else if(isvowel(s[st]) && isvowel(s[e])){
                swap(s[st],s[e]);
                st++;
                e--;
            }
           

        }
        return s;
    }
};