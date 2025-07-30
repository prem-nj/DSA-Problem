class Solution {
    private:
    int M=1e9+7;
    long long power(long a ,long b){
        //base case
        if(b==0){
            return 1;
        }     
        long long  half=power(a,b/2);
        long long res=(half*half)%M;
        if(b%2==1){
           res=(res*a)%M;
        }
      return res;
    }
public:
    int countGoodNumbers(long long n) {
       return (long long) power(5,(n+1)/2)*power(4,n/2)%M;
    }
};