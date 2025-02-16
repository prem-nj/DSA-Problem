//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

bool ispossible(vector<int> &stalls, int k,int m)
{
    int stallscnt=1;
    int stl=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-stl>=m){
            stallscnt++;
            stl=stalls[i];
        }
        if(stallscnt==k){
            return true;
        }
    }
return false;
    
}

class Solution {
  public:

int aggressiveCows(vector<int> &stalls, int k) {
  sort(stalls.begin(), stalls.end());
int s=0;
int e=stalls.back()-stalls[0];
for(int i=0;i<stalls.size();i++){
   e= max(e,stalls[i]);
}
int m=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(ispossible(stalls,k,m)){
        ans=m;
        s=m+1;
    }else{
        e=m-1;
    }
    m=s+(e-s)/2;
}
        // Write your code here
   return ans; }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends