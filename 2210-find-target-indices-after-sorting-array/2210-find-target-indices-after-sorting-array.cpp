class Solution {
public:

   int lowerbound(vector<int>&nums,int target){
    int s=0;
    int n=nums.size();
    int ans=n;
    int e=n-1;
     int m=s+(e-s)/2;
    while(s<=e){
        if(nums[m]>=target){
            ans=min(ans,m);
            e=m-1;
        }else if(nums[m]<target){
          s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
   }

    int uperbound(vector<int>&nums,int target){
    int s=0;
      int n=nums.size();
    int ans=n;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(nums[m]>target){
            ans=min(ans,m);
            e=m-1;
        }else if(nums[m]<=target){
          s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
   }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int num1=lowerbound(nums,target);
        int num2=uperbound(nums,target);
        if(num1==nums.size() || nums[num1]!=target){
            return {};
        }
        vector<int>ans;
        for(int i=num1;i<num2;i++){
        ans.push_back(i);
        }
        return ans;

    }
};