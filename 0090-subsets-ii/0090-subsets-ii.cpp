class Solution {
public: 

    void solve(vector<int>&nums,vector<int>&temp,int index,set<vector<int>>&res){
        if(index>=nums.size()){
            res.insert(temp);
            return;
        }

        temp.push_back(nums[index]);
        solve(nums,temp,index+1,res);
        temp.pop_back();
        solve(nums,temp,index+1,res);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    set<vector<int>>res;
    int index;
    vector<int>temp;
    sort(nums.begin(), nums.end());
    solve(nums,temp,0,res);
    return vector<vector<int>>(res.begin(),res.end());
        
    }
};