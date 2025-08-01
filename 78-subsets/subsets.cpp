class Solution {
    private:
    void solve(vector<int>nums,vector<int>output,vector<vector<int>>&ans){
        if(nums.empty()){
            ans.push_back(output);
            return ;
        }
        int elem =nums[0];
        //exclude;
        nums.erase(nums.begin());
        solve(nums,output,ans);
        //include
        output.push_back(elem);
        solve(nums,output,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(nums,output,ans);
        return ans;
        
    }
};