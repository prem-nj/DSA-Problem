//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int characterReplacement(string& s, int k) {
        // code here
        int i=0;
        int j=0;
        int n=s.size();
        unordered_map<char,int>count;
        int maxfreq=0;
        int maxlen=INT_MIN;
        while(j<n){
            char ch=s[j];
            count[ch]++;
            maxfreq=max(maxfreq,count[ch]);
          if ((j - i + 1) - maxfreq > k) {
                  while ((j - i + 1) - maxfreq > k){
                    count[s[i]]--;
                    maxfreq=0;
                    for( auto it:count ){
                        maxfreq=max(maxfreq,it.second);
                    }
                    i++;
                }
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
    return maxlen;}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends