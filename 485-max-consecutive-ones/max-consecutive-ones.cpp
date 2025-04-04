class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int count=0;
        int maxi=0;
        while(j<n){
            if(nums[j]==1){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
            j++;
        }
   return max(maxi,count); }
};