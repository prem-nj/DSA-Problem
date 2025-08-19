class Solution {
    public int pivotIndex(int[] nums) {
        int rightsum=0;
        int totalsum=0;
        for(int elm:nums){
            totalsum+=elm;
        }
        int n=nums.length;
        if(n==0){
            return 0;
        }
        int res=-1;
        int leftsum=0;
        for(int i=0;i<n;i++){
            rightsum=totalsum-nums[i]-leftsum;
            if(rightsum==leftsum){
                return res=i;
            }
            leftsum+=nums[i];
        }
        return res;
    }
}