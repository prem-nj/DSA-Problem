// User function Template for Java

class Solution {
    // Function to find total number of unique paths.
    public static int NumberOfPath(int a, int b) {
        // Your code here
        if(a==0||b==0){
            return 0;
        }
      int []dp=new int[b];
      dp[0]=1;
      for(int i=0;i<a;i++){
          for(int j=1;j<b;j++){
              dp[j]+=dp[j-1];
          }
      }
      return dp[b-1];
    }
}