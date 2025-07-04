class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            //if it is not zero
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }

        //for zero setelment
        while(j<n){
            nums[j++]=0;
        }
    }
};