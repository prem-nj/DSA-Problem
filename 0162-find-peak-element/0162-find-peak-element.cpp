class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
         return 0;
        }

        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if((m-1>0 && nums[m-1]<nums[m] ) && ( m<n &&nums[m+1]<nums[m] )){
                return m;
            }else if(nums[s]<nums[m]){
             s++;
            }else{
                e--;
            }
        m=s+(e-s)/2;
        }
        return m;
    }
};