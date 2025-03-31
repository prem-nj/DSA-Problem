class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.length();
        string word;
        string ans;
        reverse(s.begin(),s.end());
        while(i<n){
            //remove leading space 
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            while(i<n && s[i]!=' '){
               word+=s[i];
               i++;
            }
            reverse(word.begin(),word.end());
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=word;
            word="";
        }
        return ans;
    }
};