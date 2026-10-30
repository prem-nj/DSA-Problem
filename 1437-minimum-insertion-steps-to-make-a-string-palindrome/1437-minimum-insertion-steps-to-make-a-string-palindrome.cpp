class Solution {
public:

    int lps(string&s,string &r){
        int n=s.length();
        int m=r.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==r[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
         }
         return dp[n][m];
             }
    int minInsertions(string s) {
        int n=s.length();
        string r=s;
        reverse(r.begin(),r.end());
       return n-lps(s,r);
    }
};