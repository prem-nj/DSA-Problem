class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int>count(26,0);
        string ans;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            char ch='a'+i;
            while(count[i]){
                ans+=ch;
                count[i]--;
            }
        }
        return ans;
    }
};