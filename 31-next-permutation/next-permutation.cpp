class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //pivot index
        int pivot=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                pivot=i-1;
                break;
            }
        }
        if(pivot!=-1){
        int swap_indx=pivot;
            for(int i=n-1;i>=pivot+1;i--){
                if(nums[i]>nums[pivot]){
                    swap_indx=i;
                    break;

                }
            }
        swap(nums[swap_indx],nums[pivot]);               
        }

        reverse(nums.begin()+pivot+1,nums.end());
        
    }
};