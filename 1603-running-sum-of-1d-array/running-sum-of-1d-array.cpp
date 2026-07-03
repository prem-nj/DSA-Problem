class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int sum=nums[0];
        int j=1;
        res[0]=sum;
       for(int i=1;i<n;i++){
          res[j]=res[j-1]+nums[i];
          j++;
        }
        return res;
    }
};