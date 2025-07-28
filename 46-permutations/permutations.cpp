class Solution {
    private:
    void solve(vector<int>&nums,int index,vector<vector<int>>&ans){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[j],nums[index]);
            solve(nums,index+1,ans);
            swap(nums[j],nums[index]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }
};