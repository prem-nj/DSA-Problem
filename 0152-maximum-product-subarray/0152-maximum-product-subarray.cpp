class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1;
        int suf=1;
        int n=nums.size();
        int maxp=INT_MIN;
        for(int i=0;i<nums.size();i++){
           if(pref==0){
            pref=1;
           }
           if(suf==0){
            suf=1;
           }
            pref*=nums[i];
            suf*=nums[n-i-1];
         maxp=max(maxp,max(pref,suf));
        }
        return maxp;

    }
};