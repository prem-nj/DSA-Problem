//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int n=s.size();
        int j=0;
        int i=0;
        unordered_map<char,int>map;
        int maxi=INT_MIN;
        while(j<n){
            map[s[j]]++;
        
            if(map.size()==k){
                maxi=max(j-i+1,maxi);
                
          
            }else if(map.size()>k){
                while(map.size()>k){
                    map[s[i]]--;
                if(map[s[i]]==0){
                    map.erase(s[i]);
                }
                    i++;
                }
            }
            j++;
        }
   return (maxi==INT_MIN) ? -1 : maxi;
   }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends