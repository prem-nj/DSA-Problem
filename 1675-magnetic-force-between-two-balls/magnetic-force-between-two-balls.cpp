class Solution {
public:
bool ispossible(vector<int>&position,int m,int mid){
    int dis=0;
    int cnt=1;
  for(int i=1;i<position.size();i++){
    if(position[i]-position[dis]>=mid){
        cnt++;
        dis=i;
    }
  }
return cnt>=m;
}
    int maxDistance(vector<int>& position, int m) {
        int s=0;
        int n=position.size();
        sort(position.begin(),position.end());
        int e=position[n-1]-position[0];
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(position,m,mid)){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};