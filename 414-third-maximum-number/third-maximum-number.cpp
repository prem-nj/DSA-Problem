class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=1;i--){
         if(nums[i]!=nums[i-1]){
            c++;
         }
         if(c==2){
            return nums[i-1];
         }
        }
        return nums[n-1];
    }
};