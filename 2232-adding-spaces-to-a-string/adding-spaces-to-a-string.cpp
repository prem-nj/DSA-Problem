class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int m=spaces.size();
        int j=0;
        for(int i=0;i<s.length();i++){
        if(j<m && spaces[j]==i){
        res+=" ";
        j++;
        }
        res+=s[i];
        }
        return res;
    }
};