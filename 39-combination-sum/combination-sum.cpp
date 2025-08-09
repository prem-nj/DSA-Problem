class Solution {
private:
set<vector<int>>s;
  void solve(vector<int>&candidates,int  target,int index,vector<int>&cobn,vector<vector<int>>&ans){

    //base case
    if(index>=candidates.size() || target<0){
      
        return ;
    }
    if(target==0){
        if(s.find(cobn)==s.end()){

        ans.push_back(cobn);
        s.insert(cobn);
        }
        return;
    }
    
    //include
    int num=candidates[index];
    cobn.push_back(num);
    solve(candidates,target-num,index+1,cobn,ans);
    
    //multiple
    solve(candidates,target-num,index,cobn,ans);
    
    //exclude
    cobn.pop_back();
    solve(candidates,target,index+1,cobn,ans);
    
  }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>ans;
     vector<int>cobn;
        int index=0;
        solve(candidates,target,index,cobn,ans);
        return ans;
    }
};