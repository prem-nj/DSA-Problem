class Solution {
public:
   bool ispossible(int n,vector<int>&quantities,int m){
    int cnt=0;
    for(int x:quantities){
        cnt+=(x+m-1)/m;
        if(cnt>n)return false;
    }
    return cnt<=n;
   }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s=1;
        int e=*max_element(quantities.begin(),quantities.end());
        int m=s+(e-s)/2;
        int ans=0;
        while(s<=e){
            if(ispossible(n,quantities,m)){
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