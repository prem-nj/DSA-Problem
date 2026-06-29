class Solution {
public:
bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return true;
    }
    return false;
}
    bool halvesAreAlike(string s) {
        int i=0;
        int n=s.length();
        int m=n/2;
        int j=m;
        int countl=0;
        int countr=0;
        while(i<m && j<n){
          if(isvowel(s[i])){
            countl++;
          }
          if(isvowel(s[j])){
            countr++;
          }
          i++;
          j++;
        }
        if(countr==countl){
            return true;
        }
        return false;
        
    }
};