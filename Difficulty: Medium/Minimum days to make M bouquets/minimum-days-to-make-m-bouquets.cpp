//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

  class Solution {
  public:
  // Function to check if it's possible to make 'm' bouquets in 'mid' days
  bool ispossible(int m, int k, vector<int>& arr, int mid) {
      int boquet = 0;
      int flower = 0;

      for (int &day : arr) {
          if (day <= mid) {
              flower++;  // Inc the flower count
              if (flower == k) { // If we have k consecutive flowers
                  boquet++; 
                  flower = 0; // Reset flower count for the next bouquet
              }
          } else {
              flower = 0; // Reset because flowers must be consecutive
          }
          
         
          if (boquet >= m) { 
              return true;
          }
      }

   
      return boquet >= m;
  }
 
  int minDaysBloom(int m, int k, vector<int> &arr) {
      int n = arr.size();

      
      if (m * k > n) return -1;

      int s = *min_element(arr.begin(), arr.end());
      int e = *max_element(arr.begin(), arr.end());
      int ans = -1; 
      while (s <= e) {
          int mid = s + (e - s) / 2;
          
          // Check if 'mid' days is enough
          if (ispossible(m, k, arr, mid)) {
              ans = mid;  
              e = mid - 1; // Try for a smaller number of days
          } else {
              s = mid + 1; 
          }
      }
      
      return ans;
  }
};
     
    


//{ Driver Code Starts.
int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        getline(cin, str);
        int m = stoi(str);
        getline(cin, str);
        int k = stoi(str);
        Solution obj;
        cout << obj.minDaysBloom(m, k, arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends