class Solution {
    private:
    int power(long long a,long long b){
        // int m=1e7+9;
        if(b==0){
            return 1;
        }
        long long half=power(a,b/2);
        long long res=(half*half);
        if(b%2==1){
            res= (long long) (res*a);
        }
        return res;
    }
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        long long a=3;
        double logn=log(n)/log(3);
        long long b=round(logn);

       long long ans= power(a,b);
       if(ans!=n){
        return false;
       }
       return true;
    }
};