// User function Template for C++

class Solution {
    private:
    void solve(vector<int>arr,vector<int>output,int index,vector<vector<int>>&ans){
        //base case
        if(index>=arr.size()){
            ans.push_back(output);
            return ;
        }
        //exclude
        solve(arr,output,index+1,ans);
        //include
        int elem =arr[index];
        output.push_back(elem);
        solve(arr,output, index+1,ans);
    }
    
  public:
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        vector<int>output;
        int index;
          
        solve(arr,output,0,ans);
          sort(ans.begin(),ans.end());
        return ans;
    }
    
    
};