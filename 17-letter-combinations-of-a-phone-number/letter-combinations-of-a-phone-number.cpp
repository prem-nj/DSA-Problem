class Solution {
    private:
    void solve(string digits,string output,int index,   vector<string>&ans,string mapping[]){
        //base case
        if(digits.size()<=index){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string value=mapping[number];
        for(int  i=0;i<value.length();i++){
            output.push_back(value[i]);
           solve(digits,output,index+1,ans,mapping);
           output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index;
        if(digits.length()==0){
            return ans;
        }
        solve(digits,output,0,ans,mapping);
        return ans;
    }
};