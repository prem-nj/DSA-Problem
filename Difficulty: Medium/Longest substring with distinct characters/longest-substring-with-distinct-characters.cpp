//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char,int>map;
        int i=0;int j=0;
        int n=s.length();
        int maxi=INT_MIN;
        while(j<n){
            map[s[j]]++;
            if(map[s[j]]>1){
                  while(map[s[j]]>1){
                      map[s[i]]--;
                      if(map[s[i]]==0){
                          map.erase(s[i]);
                      }
                      i++;
                  }
            }
            if(map.size()==j-i+1){
                maxi=max(maxi,j-i+1);
            }
            j++;
            
        }
        
        
   return maxi; }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends