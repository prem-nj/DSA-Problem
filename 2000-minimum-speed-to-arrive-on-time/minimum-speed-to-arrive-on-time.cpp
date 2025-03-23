class Solution {
public:
bool ispossible(vector<int>& dist, double hour,int m){
   double hcnt=0;
    int n=dist.size();
    for(int i=0;i<n-1;i++){
     hcnt+=ceil((double)dist[i]/m);
    
      
    }
    hcnt+=(double)dist[n-1]/m;
     if(hcnt>hour){
        return false;
     }
return hcnt<=hour;
}
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1;
        int e=1e9;
        int m=s+(e-s)/2;
        int n=dist.size();
        int ans=-1;
        if(hour<n-1){
            return -1;
        }
        while(s<=e){
            if(ispossible(dist,hour,m)){
                ans=m;
               e=m-1;
            }else {
                s=m+1;
            }
            m=s+(e-s)/2;
        }
    return ans;}
};