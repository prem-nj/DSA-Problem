class Solution {
public:
    int fib(int n) {
        //base case;

        if(n==1){
            return 1;

        }
        if(n==0){
            return 0;
        }
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
};