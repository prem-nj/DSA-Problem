class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double  maxi=INT_MIN;
        int n=nums.size();
         int sum=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
            double avg = (double)sum / k;
            maxi=max(maxi,avg);
            sum-=nums[i];
            i++;
            }
        j++;}
   return maxi; }
};