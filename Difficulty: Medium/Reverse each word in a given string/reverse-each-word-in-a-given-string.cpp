//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to reverse words in a given string.
    // Use a stack to reverse words and handle spaces.
    string reverseWords(string &s) {
        // code here
        int n=s.length();
        string ans="";
        int i=0;
        string word="";
        while(i<n){
            //remove leading space;
            while(i<n && s[i]==' '){
                i++;
            }
            //reaches end
            if(i>=n){
                break;
            }
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=word;
            //reset the word
            word ="";
            
        }
        
        
        
       return ans; 
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj;                       // Create an object of the Solution class
        string ans = obj.reverseWords(str); // Reverse the words in the string
        cout << '"';                        // Print opening quote
        cout << ans;                        // Print the result
        cout << '"';                        // Print closing quote
        cout << endl;                       // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends