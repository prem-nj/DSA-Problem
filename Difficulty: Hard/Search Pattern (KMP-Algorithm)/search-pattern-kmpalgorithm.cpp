//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  void compute(vector<int>&lps,string&pat,int m){
      
      int len=0;
      lps[0]=0;
      int i=1;
      while(i<m){
          if(pat[i]==pat[len]){
              len++;
              lps[i]=len;
              i++;
          }else{
              if(len!=0){
              len=lps[len-1];
                  
              }else{
                  lps[i]=0;
                  i++;
              }
              
          }
      }
      
  }
  
     
    vector<int> search(string& pat, string& txt) {
        // code here
       int n=txt.length();
       vector<int>result;
       int m=pat.length();
       int i=0;
       int j=0;
       vector<int>lps(m,0);
       compute(lps,pat,m);
       while(i<n){
           if(pat[j]==txt[i]){
               i++;
               j++;
           }
                   

           
           if(j==m){
             result.push_back(i-m);
             j=lps[j-1];
             }else if(i<n &&txt[i]!=pat[j]){
               if(j!=0){
               j=lps[j-1];
                   
               }else{
                   i++;
               }
           }
       }
   return result; }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends