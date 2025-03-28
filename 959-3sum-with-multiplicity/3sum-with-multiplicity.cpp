class Solution {
public:
    // Time Complexity:- O(N^2 + NlogN)
    // Space Complexity:- O(1)
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        long long ans = 0;
 
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int l = i + 1,r = n - 1;
            while(l<r){
                if(arr[i]+arr[l]+arr[r]==target){
                   long long l_cnt = 1,r_cnt = 1;
                    while(l<r and arr[l]==arr[l+1]){
                        l++;
                        l_cnt++;
                    }
                    while(l<r and arr[r]==arr[r-1]){
                        r--;
                        r_cnt++;
                    }
                    if(l==r){
                        long long take = (l_cnt*(l_cnt-1))/2;
                        ans += take;
                        ans %= 1000000007;
                    }
                    else{
                        ans += (l_cnt*r_cnt)%1000000007;
                        ans %= 1000000007;
                    }
                    l++;
                    r--;
                }
                else if(arr[i]+arr[l]+arr[r]>target){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return ans;
    }
};