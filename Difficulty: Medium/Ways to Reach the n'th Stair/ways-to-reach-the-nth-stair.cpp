class Solution {
  public:
    int countWays(int n) {
        // your code here
        vector<int>dp(n+1,-1);
        //base cose;
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            
        dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};
