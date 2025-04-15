class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int sum=0;
        int cnt=0;
        int n=nums.size();
        while(j<n){
        sum+=(nums[j]%2);
        if(sum>k){
            while(sum>k){
            sum-=(nums[i]%2);
            i++;
            }
        }
        cnt+=j-i+1;
        j++;
        }
    return cnt;}
   
   int numberOfSubarrays(vector<int>&nums,int k){
    return atmost(nums,k)-atmost(nums,k-1);
   }


};
