//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++


class Solution {
public:
    bool ispossible(vector<int>& arr, int k, int m) {
        int paintsum = 0;
        int pntcnt = 1; 

        for (int i = 0; i < arr.size(); i++) {
            if (paintsum + arr[i] > m) { // If adding this board exceeds limit
                pntcnt++;  // Allocate a new painter
                paintsum = arr[i]; // Start new sum
                if (pntcnt > k) return false; // Too many painters needed
            } else {
                paintsum += arr[i];
            }
        }
        return true;
    }

    int minTime(vector<int>& arr, int k) {
        if (k > arr.size()) return *max_element(arr.begin(), arr.end()); 
        
        int s = *max_element(arr.begin(), arr.end()); 
        int e = accumulate(arr.begin(), arr.end(), 0); 
        int ans = e; // Initialize to total sum

        while (s <= e) {
            int m = s + (e - s) / 2;

            if (ispossible(arr, k, m)) {
                ans = m;
                e = m - 1; // Try for a smaller value
            } else {
                s = m + 1; // Increase limit
            }
        }
        return ans;
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
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends