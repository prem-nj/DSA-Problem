//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string encode(string s) {
        // code here
        int n=s.size();
        string ans="";
        int indx=0;
        for(int i=0;i<n;i++){
        int count=0;
            char ch=s[i];
            
           while(i<n && ch==s[i]){
               count++;
               i++;
           }
         
               ans+=ch;
               ans+=to_string(count);
             
           
          i--;  
        }
   return ans; 
        
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends