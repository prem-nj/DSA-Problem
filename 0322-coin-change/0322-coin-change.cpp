class Solution {
public:

    int solve(vector<int>&coins,int amount ,int n){
        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=1;j<=amount;j++){
            dp[0][j]=INT_MAX-1;
        }
        for(int j=1;j<=amount;j++){
            if((j%coins[0])!=0){
                dp[1][j]=INT_MAX-1;
            }else{
                dp[1][j]=j/coins[0];
            }
        }

        for(int i=2;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j>=coins[i-1]){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][amount]>=INT_MAX-1 ? -1:dp[n][amount];
    }


    int coinChange(vector<int>& coins, int amount) {
        
        return solve(coins,amount ,coins.size());
    }
};