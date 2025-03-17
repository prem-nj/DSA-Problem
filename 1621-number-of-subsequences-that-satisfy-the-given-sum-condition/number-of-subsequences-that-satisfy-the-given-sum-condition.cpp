class Solution {
public:
    int numSubseq(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int s=0;
        int e=n-1;
        int result=0;
        int mod=1e9+7;
        vector<int>power(n,1);
        //this set power[0]=1;

        //precomputated power
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%mod;

        }



        while(s<=e){
            int sum=arr[s]+arr[e];
            if(sum<=target){
                result=(result+power[e-s])%mod;
                s++;
            }else{
                e--;
            }

        }

    return result;}
};