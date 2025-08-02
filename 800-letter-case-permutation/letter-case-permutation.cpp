class Solution {
private:
  void solve(string s,int index,vector<string>&ans){
    //base case
    if(index>=s.size()){
        ans.push_back(s);
        return;
    }
    //exclude;
   solve(s,index+1,ans);
   //include;
//    char ch=s[index]; ///copy  it will not change original
   if(isalpha(s[index])){
    s[index]=islower(s[index])?toupper(s[index]):tolower(s[index]);
    solve(s,index+1,ans);
    //backtrack
    s[index]=isupper(s[index])?tolower(s[index]):toupper(s[index]);
   }
  



  }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        int index=0;
        solve(s,index,ans);
        return ans;
        
    }
};