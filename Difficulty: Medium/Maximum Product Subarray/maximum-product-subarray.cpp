class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
      int pref=1;
      int suf=1;
      int ans=INT_MIN;
      int n=arr.size();
      for(int i=0;i<arr.size();i++){
          if(pref==0)pref=1;
          if(suf==0) suf=1;
          pref=pref*arr[i];
          suf=suf*arr[n-i-1];
          ans=max(ans,max(pref,suf));
          
      }
      return ans;
    }
};