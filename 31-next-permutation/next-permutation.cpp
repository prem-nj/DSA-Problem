class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                 pivot=i-1;
                 break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int j=n-1;j>pivot;j--){
        if(nums[pivot]<nums[j]){
            swap(nums[pivot],nums[j]);
            break;
        }
        }
        reverse(nums.begin()+pivot+1,nums.end());

    }
};