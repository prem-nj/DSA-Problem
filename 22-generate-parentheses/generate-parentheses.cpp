class Solution {
private:

    bool valid(string ans,int n){
        int count=0;
        for(char ch:ans){
            if(ch=='('){
                count++;
            }else{
                count--;
                if(count<0){
                    return false;
                }
            }
        }
        return count==0;
    }
    
    void solve(string &ans,int n,vector<string>&res){
        //base case
        if(ans.size()==2*n){
            if(valid(ans,n)){
                res.push_back(ans);
            }
            return ;
        }
       ans.push_back('(');
       solve(ans,n,res);
       ans.pop_back();
       ans.push_back(')');
       solve(ans,n,res);
       ans.pop_back();

    }
public:
    vector<string> generateParenthesis(int n) {
        string ans="";
        vector<string>res;
        solve(ans,n,res);
        return res;
    }
};