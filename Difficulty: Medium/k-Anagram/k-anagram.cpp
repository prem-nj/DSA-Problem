class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        // code here
        int n1=s1.length();
        int n2=s2.length();
        
        if(n1!=n2){
            return false;
        }
        
        vector<int>count(26,0);
        for(int i=0;i<n1;i++){
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        int cnt=0;
        for(int j=0;j<26;j++){
            //min chnge require to makre it anagram
            if(count[j]>0){
                cnt+=count[j];
            }
        }
       
        return cnt<=k;
    }
};