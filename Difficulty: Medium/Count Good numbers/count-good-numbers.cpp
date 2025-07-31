class Solution {
private:
    long long power(long long a,long long b){
        int M=1e9+7;
        //base case
        if(b==0){
            return 1;
        }
        
        long long half=power(a,b/2);
        long long res=(half*half)%M;
        ///if bis odd 
        if(b%2==1){
            res=(a*res)%M;
        }
        return res;
    }
    
  public:
    int countGoodNumbers(long long N) {
        // code here
        
         int M=1e9+7;
        return (long long) (power(5,(N+1)/2)*power(4,(N/2)))%M;
    }
};
