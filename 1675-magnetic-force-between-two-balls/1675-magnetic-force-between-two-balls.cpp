class Solution {
public:

    bool ispossible(vector<int>&position,int m,int mid){
        int cnt=1;
        int num=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-num>=mid){
                cnt++;
                num=position[i];
            }
                if(cnt>=m){
                    return true; 
                }
            
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int s=0;
                sort(position.begin(), position.end());
        int e=position.back()-position.front();
        int mid=s+(e-s)/2;
        int ans=0;
        while(s<=e){
        if(ispossible(position,m,mid)){
            s=mid+1;
            ans=mid;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
    }
};