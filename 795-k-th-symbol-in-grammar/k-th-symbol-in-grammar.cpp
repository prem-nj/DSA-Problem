class Solution {
        private:
        long long pow(long long a,long long b){
            int M=1e9+7;
            if(b==0){
                return 1;
            }
            long long half=pow(a,b/2);
            long long res=(half*half)%M;
            if(b%2==1){
                return (res*a)%M;
            }
            return res;
        }
    int solve(int n,int k){
        if(n==1 ){
            return 0;
        }
        int m=(pow(2,n-1))/2;
        if(m>=k){
            return solve(n-1,k);
        }else{
            return !solve(n-1,k-m);
        }
    }
public:
    int kthGrammar(int n, int k) {
        return solve(n,k);
    }
};