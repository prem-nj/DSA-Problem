class Solution {
    public int findMiddleIndex(int[] nums) {
        int n=nums.length;
        
        if(n==0){
            return -1;
        }
        if(n==1){
            return 0;
        }
        int totalsum=0;
        for(int ele:nums){
            totalsum+=ele;
        }
        int leftsum=0;
        for(int i=0;i<n;i++){
           int rightsum=totalsum-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }
            leftsum+=nums[i];
        }




     return -1;
    }
}