class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
     
        // code here
        int n=s1.length();
        int m=s2.length();
           if(n!=m){
            return false;
        }
        vector<int>count(26,0);
        for(int i=0;i<s1.length();i++){
            count[s1[i]-'a']++;
        }
        int j=0;
        while(j<m){
            count[s2[j]-'a']--;
            j++;
            
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};