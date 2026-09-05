class Solution {
public:

bool ispossible(vector<int>&price,int k,int m){
    int cnt=1;
    int num=price[0];
    for(int i=1;i<price.size();i++){
        if(price[i]-num>=m){
            cnt++;
            num=price[i];
        }
        if(cnt>=k)return true;
    }
    return false;
}
    int maximumTastiness(vector<int>& price, int k) {
        int s=0;
        sort(price.begin(),price.end());
        int e=price.back()-price.front();
        int m=s+(e-s)/2;
        int ans=0;
        while(s<=e){
          if(ispossible(price,k,m)){
            s=m+1;
            ans=m;
          }else{
            e=m-1;
          }
          m=s+(e-s)/2;
        }
        return ans;
    }
};