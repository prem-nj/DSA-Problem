// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        //baes case;
        
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        
        //recurssion relation 
        int ans=nthFibonacci(n-1)+ nthFibonacci(n-2);
        return ans;
    }
};