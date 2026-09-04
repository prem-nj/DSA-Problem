class Solution {
public:
    bool ispossible(vector<int>&time,int totalTrips,long long m){
        long long tcnt=0;
        for(int &x:time){
            tcnt+=m/x;
            if(tcnt>=totalTrips)return true;
        }
    return false;
    }
     
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long s=1;
        long long e=1e14;
        long long m=s+(e-s)/2;
        long long ans=-1;
        while(s<=e){
            if(ispossible(time,totalTrips,m)){
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