class Solution {
  public:
  
    bool ispossible(vector<int>&arr,int k,int m){
        for(int &x:arr){
            if(x>m){
                return false;
            }
        }
        int sumday=0;
        int cnt=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(sumday+arr[i]<=m){
                sumday+=arr[i];
            }else{
                cnt++;
                sumday=arr[i];
                if(cnt>k){
                    return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int s=*max_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(ispossible(arr,k,m)){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return ans;
        
    }
};