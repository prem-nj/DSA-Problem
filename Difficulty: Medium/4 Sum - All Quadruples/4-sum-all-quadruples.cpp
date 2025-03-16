//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        int n = arr.size();
        if (n < 4) return ans; // Need at least 4 elements
        
        sort(arr.begin(), arr.end()); // Sort to ensure q1 <= q2 <= q3 <= q4
        
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicates for i
            
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && arr[j] == arr[j - 1]) continue; // Skip duplicates for j
                
                int k = j + 1; // Third element
                int e = n - 1; // Fourth element
                while (k < e) {
                    long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[e]; // Avoid overflow
                    if (sum == target) {
                        ans.push_back({arr[i], arr[j], arr[k], arr[e]});
                        // Move pointers and skip duplicates
                        do { k++; } while (k < e && arr[k] == arr[k - 1]);
                        do { e--; } while (k < e && arr[e] == arr[e + 1]);
                    } else if (sum < target) {
                        k++;
                    } else { // sum > target
                        e--;
                    }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(arr, d);
        sort(ans.begin(), ans.end());
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << endl;
        }
        if (ans.empty()) {
            cout << -1 << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends