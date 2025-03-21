class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mod=1e9+7;
        int n = nums.size();
        int s=0;
        int e=n-1;
        int res=0;
        vector<int>power(n,1);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%mod;
        }
      while (s<=e)
      {

       if(nums[s]+nums[e]<=target){
        res=(res+power[e-s])%mod;
        s++;
        
       }else{
            e--;
       }

      }
      
   return res;}
};