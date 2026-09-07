class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=1;
        int n=nums.size();
        int cntzero=0;
        int maxi=INT_MIN;
        while(j<n){
         if(nums[j]==0){
            cntzero++;
         }
         if(cntzero>k){
            while(cntzero>k){
                if(nums[i]==0){
                    cntzero--;
                }
                i++;
            }
         }
         maxi=max(maxi,j-i+1);
         j++;
        }
        return maxi-1;
    }
};