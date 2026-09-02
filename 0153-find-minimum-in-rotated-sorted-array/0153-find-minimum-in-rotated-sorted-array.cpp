class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int m=s+(e-s)/2;
        while(s<e){
          if(nums[m]>nums[e]){
            s=m+1;
          }else{
            e=m;
          }
          m=s+(e-s)/2;
        }
        return nums[s];
    }
};