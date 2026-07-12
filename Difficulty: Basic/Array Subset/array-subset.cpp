class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>ct;
        for(int x:a){
            ct[x]++;
        }
        for(int x:b){
            if(ct[x]==0){
                return false;
            }
            ct[x]--;
        }

        
        return true;
    }
};