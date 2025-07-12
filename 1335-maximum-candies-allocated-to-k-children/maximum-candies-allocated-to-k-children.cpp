class Solution {
public:

bool isposible(vector<int>& candies, long long k,int m){
    long long  cnt=0;
    for(int &can:candies){
      cnt+=(can)/m;

    }
    return cnt>=k;

}   
 int maximumCandies(vector<int>& candies, long long k) {
        long long s=1;
        long long e=*max_element(candies.begin(),candies.end());
        long long  ans=0;
        while(s<=e){
        long long m=s+(e-s)/2;

            if(isposible(candies,k,m)){
                ans=m;
                s=m+1;
            }else {
                e=m-1;
            }
          

        }
        return ans;
    }
};