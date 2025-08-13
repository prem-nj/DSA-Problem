class Solution {
    public int countPrimes(int n) {
        int[] prime = new int[n + 1];
        if(n<2){
         return 0;
        }
        for (int i = 2; i < n; i++) {
            prime[i] = 1;
        }
        for (int j = 2; j * j <n; j++) {
            if (prime[j]==1) {
                for (int k = j*j; k < n; k+=j) {
                    prime[k] = 0;
                }
            }
        }
        int count=0;
        for(int l=2;l<n;l++){
            if(prime[l]==1){
             count++;
            }
        }
     return count;
    }
}