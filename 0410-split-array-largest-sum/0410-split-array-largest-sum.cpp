class Solution {
public:

    bool ispossible(vector<int>&nums,int k,long long m){
        long long sumcnt=0;
        int cnt=1;
        for(int x:nums){
            if(x>m){
                return false;
            }
        }

      for(int i=0;i<nums.size();i++){
        sumcnt+=nums[i];
        if(sumcnt>m){
          cnt++;
          sumcnt=nums[i];
          if(cnt>k){
            return false;
          }
        }

      }

        return true;
    }
   
    int splitArray(vector<int>& nums, int k) {

        if(nums.size()<k){
            return -1;
        }
       long long s=*max_element(nums.begin(),nums.end());
        long long e=accumulate(nums.begin(),nums.end(),0LL);
        long long m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(ispossible(nums,k,m)){
                e=m-1;
                ans=m;
            }else{
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return ans;
    }
};