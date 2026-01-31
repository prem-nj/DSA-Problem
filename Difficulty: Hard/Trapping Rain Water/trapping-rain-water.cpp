class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n=arr.size();
         int s=0;
         int e=n-1;
         int ans=0;
         int lmax=0;
         int rmax=0;
         while(s<e){
            lmax=max(lmax,arr[s]);
            rmax=max(rmax,arr[e]);
             
         
         
         if(lmax<rmax){
             ans+=lmax-arr[s];
             s++;
         }
         else{
             ans+=rmax-arr[e];
             e--;
         }
        
         }
        
        // code here
        return ans;
    }
};