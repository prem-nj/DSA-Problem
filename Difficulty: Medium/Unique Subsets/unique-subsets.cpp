class Solution {
    private:
    void solve(vector<int>&arr,int n,int index,vector<int>output,set<vector<int>>&ans){
        //base        //basecase
        if(index>=arr.size()){
            ans.insert(output);
            return;
        }
        //exclude
        solve(arr,n,index+1,output,ans);
        int elem=arr[index];
        output.push_back(elem);
        solve(arr,n,index+1,output,ans);
        
    }
  public:
    // Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        set<vector<int>>ans;
        vector<int>output;
        int index=0;
       
        solve(arr,n,index,output,ans);
        
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};