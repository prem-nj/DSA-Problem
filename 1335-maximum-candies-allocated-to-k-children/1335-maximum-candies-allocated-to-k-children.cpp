class Solution {
public:
bool ispossible(vector<int>&candies,long long k,int m){
    long long cndcnt=0;
for(int &x:candies){
    cndcnt+=x/m;
    if(cndcnt>=k)return true;
}
return false;
}
    int maximumCandies(vector<int>& candies, long long k) {
      int s=1;
      int e=*max_element(candies.begin(),candies.end());
      int m=s+(e-s)/2;
      int ans=0;
      while(s<=e){
        if(ispossible(candies,k,m)){
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