class Solution {
    private:
    void solve(vector<int>&nums,vector<int>output,int index,set<vector<int>>&uniq){
        
        if(index>=nums.size()){
        uniq.insert(output);
        return ;   
         }
        
        //exclude
        solve(nums,output,index+1,uniq);

        ///include
        int elem=nums[index];
        
        output.push_back(elem);
        
        solve(nums,output,index+1,uniq);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>output;  
        sort(nums.begin(), nums.end());
          set<vector<int>>uniq;
        int index=0;
        solve(nums,output,index,uniq);
        return vector<vector<int>>(uniq.begin(),uniq.end());
    }
};