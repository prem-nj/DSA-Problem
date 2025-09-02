class Solution {
public:
void cobsum(vector<int>&candidate,int index,int target,vector<vector<int>>&ans,vector<int>&cobn){
    //base case
    if(index>=candidate.size() || target<0){
      return;
    }
    if(target==0){
        return ans.push_back(cobn);
    }
if(candidate[index]<=target){
    cobn.push_back(candidate[index]);
    cobsum(candidate,index,target-candidate[index],ans,cobn);
    cobn.pop_back();
}
//exclude
cobsum(candidate,index+1,target,ans,cobn);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index=0;
        vector<vector<int>>ans;
        vector<int>cobn;
        cobsum(candidates,index,target,ans,cobn);
        return ans;
    }
};