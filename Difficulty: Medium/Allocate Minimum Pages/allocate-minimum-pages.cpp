//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends








class Solution {
public:
    bool ispossible(vector<int> &arr, int n, int k, int m) {
        int pagecnt = 1, pagesum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > m) return false;  
            if (pagesum + arr[i] <= m) {
                pagesum += arr[i];
            } else {
                pagesum = arr[i];
                pagecnt++;
            }
            if (pagecnt > k) return false;
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n) return -1;  

        int s = *max_element(arr.begin(), arr.end());  
        int e = accumulate(arr.begin(), arr.end(), 0); 
        int ans = -1;

        while (s <= e) {
            int m = s + (e - s) / 2;
            if (ispossible(arr, n, k, m)) {
                ans = m;
                e = m - 1;
            } else {
                s = m + 1;
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
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends