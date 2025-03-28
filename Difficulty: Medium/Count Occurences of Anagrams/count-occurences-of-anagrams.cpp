//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
  bool allzero(vector<int>&counter){
      for(int &i :counter){
          if(i!=0){
              return false;
          }
      }
      return true;
  }
    int search(string &pat, string &txt) {
        // code here
        int n=txt.size();
        int k=pat.size();
        int cnt=0;
        vector<int>counter(26,0);
        for(int i=0;i<k;i++){
            int ch =pat[i];
            counter[ch-'a']++;
        }
        int j=0,i=0;
        while(j<n){
            counter[txt[j]-'a']--;
            if(j-i+1==k){
                if(allzero(counter)){
                    cnt++;  
                }
                counter[txt[i]-'a']++;
                i++;
            }
            j++;
        }
    return  cnt;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends