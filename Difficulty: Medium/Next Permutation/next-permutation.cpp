//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        //pivot index
        
        int pivot=-1;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if(arr[i-1]<arr[i]){
                pivot=i-1;
                break;
            }
        }
        if(pivot!=-1){
        int swap_indx=pivot;
        for(int i=n-1;i>=pivot+1;i--){
            if(arr[i]>arr[swap_indx]){
                swap_indx=i;
                break;
            }
        }
        swap(arr[swap_indx],arr[pivot]);
            
        }
        reverse(arr.begin()+pivot+1,arr.end());
        
        
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends