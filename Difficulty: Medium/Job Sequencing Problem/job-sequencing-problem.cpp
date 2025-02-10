//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> JobSequencing(vector<int> &id, vector<int> &deadline,
                              vector<int> &profit) {
                                  
        int profitcnt = 0;
        int n = id.size();
        int cntofjob = 0;
        
        vector<vector<int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i], id[i]});
        }
        
    
        sort(jobs.begin(), jobs.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] > b[0];  
        });

        int maxdeadline = 0;
        for (int i = 0; i < n; i++) {
            maxdeadline = max(maxdeadline, jobs[i][1]);
        }
        
        vector<int> slot(maxdeadline + 1, -1);
        

        for (int i = 0; i < n; i++) {
            int profit = jobs[i][0];
            int dedline = jobs[i][1];

            for (int j = dedline; j > 0; j--) {
                if (slot[j] == -1) { 
                    slot[j] = jobs[i][2];
                    cntofjob++;
                    profitcnt += profit;
                    break;
                }
            }
        }

        return {cntofjob, profitcnt}; 
    }
};


//{ Driver Code Starts.
//            Driver program to test methods
int main() {
    int t;
    // testcases
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> jobIDs, deadlines, profits;
        string temp;
        getline(cin, temp);
        istringstream ss1(temp);
        int x;
        while (ss1 >> x)
            jobIDs.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss3(temp);
        while (ss3 >> x)
            profits.push_back(x);

        int n = jobIDs.size();

        Solution obj;
        vector<int> ans = obj.JobSequencing(jobIDs, deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends