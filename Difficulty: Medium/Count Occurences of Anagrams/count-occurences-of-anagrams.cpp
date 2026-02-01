// User function template for C++
class Solution {
  public:
  bool iszero(vector<int>counter){
      for(int i=0;i<26;i++){
          if(counter[i]!=0){
              return false;
          }
      }
      return true;
  }
    int search(string &pat, string &txt) {
        vector<int>counter(26,0);
        int k=pat.length();
        for(int i=0;i<k;i++){
            counter[pat[i]-'a']++;
        }
        int i=0,j=0;
        int count=0;
        int n=txt.length();
        while(j<n){
            counter[txt[j]-'a']--;
            if(j-i+1==k){
                if(iszero(counter)){
                    count++;
                }
                counter[txt[i]-'a']++;
                i++;
                
            }
            j++;
            
        }
        // code here
        return count;
        
    }
};