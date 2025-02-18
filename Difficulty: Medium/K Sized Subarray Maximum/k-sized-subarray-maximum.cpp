//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        vector<int>ans;
        deque<int>deq;
      for(int i=0;i<n;i++){
          
       
        //enough space is for numi
        while(!deq.empty() && deq.front()<=i-k){
            deq.pop_front();
        }
        
        //ensuring deq front have  max elem
        while(!deq.empty() && arr[i]>arr[deq.back()]){
            deq.pop_back();
        }
        //incase we may can have another nelem greaterr
        
        deq.push_back(i);
        
        if(i>=k-1){
            ans.push_back(arr[deq.front()]);
        }
        
        
          
          
      }
        return ans;  
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends