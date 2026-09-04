class Solution {
public:
 bool ispossible(vector<int>&piles,int h,int m){
    int hcnt=0;
    for(int i=0;i<piles.size();i++){
    
        hcnt+=(piles[i]+m-1)/m;
    
        if(hcnt>h){
            return false;
        }
    }
        return hcnt<=h;
    
 }


    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int n=piles.size();
        int e=*max_element(piles.begin(),piles.end());
        int m=s+(e-s)/2;
        int ans=INT_MAX;
        while(s<=e){
         if(ispossible(piles,h,m)){
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