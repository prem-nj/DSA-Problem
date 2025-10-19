class Solution {
  public: 
  
    int maximizeMoney(int N, int K) {
        // code heref
       
    
    vector<int>dp(N+1,0);
      
        dp[0]=0;
        dp[1]=K;
        
        for(int i=2;i<=N;i++){
            int steal=K+dp[i-2];
            int skip=dp[i-1];
            dp[i]=max(steal,skip);
        }
        return dp[N];
    }
};