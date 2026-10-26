class Solution {
public:

    int solve(vector<int>&nums,int sum,int n){
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j>=nums[i-1]){
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int arrsum=accumulate(nums.begin(),nums.end(),0);
        int sum=(arrsum+target)/2;
        if(arrsum+target<0 ||  (arrsum+target)%2==1){
            return 0;
        }

        return solve(nums,sum,nums.size());
    }
};