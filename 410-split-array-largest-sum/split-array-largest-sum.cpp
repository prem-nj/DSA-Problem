class Solution {
public:
bool ispossible(vector<int>&nums,int k,int mid ){
    int kcnt=1;
    int sum=0;
    for(int &i:nums){
       
        if(sum+i<=mid){
            sum+=i;
        }else{
            kcnt++;
            if(kcnt>k||i>mid){
                return false;
            }
            sum=i;
        }
    }
    if(kcnt>k){
        return false;
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
   
        int n=nums.size();
        int s=*max_element(nums.begin(),nums.end());
        int ans=-1;
        
        int e = accumulate(nums.begin(), nums.end(), 0);
        int mid=s+(e-s)/2;
        while(s<=e){
            if(ispossible(nums,k,mid)){
                ans=mid;
                e=mid-1;
            }else{
              s=mid+1;
            }
            mid=s+(e-s)/2;
        }
    return ans;    
    }
};