//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int s=0;
        int n=arr.size();
        int e=n-1;
        int lmax=0;
        int rmax=0;
        int res=0;
        while(s<=e){
            lmax=max(lmax,arr[s]);
            rmax=max(rmax,arr[e]);
            if(lmax<rmax){
                res+=lmax-arr[s];
                s++;
            }else{
                res+=rmax-arr[e];
                e--;
            }
            
        }
    
    return res;}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends