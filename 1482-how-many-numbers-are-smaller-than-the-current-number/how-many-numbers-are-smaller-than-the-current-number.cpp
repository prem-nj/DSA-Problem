class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res=nums;
        sort(res.begin(),res.end());
        unordered_map<int,int>firstindex;
        for(int i=0;i<nums.size();i++){
             if(firstindex.find(res[i])==firstindex.end()){
             firstindex[res[i]]=i;
             }
        }
        vector<int>ans;
        for(int x:nums){
            ans.push_back(firstindex[x]);
        }
        return ans;

    }
};