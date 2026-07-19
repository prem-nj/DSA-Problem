class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>pair;
        for(int i=0;i<nums.size();i++){
            pair.push_back({nums[i],i});
        }
        sort(pair.begin(),pair.end());
        vector<int>ans;
        int s=0;
        int e=pair.size()-1;
        while(s<e){
            int sum=pair[s].first+pair[e].first;
            if(sum==target){
                 return  {pair[s].second,pair[e].second};
            }else if(sum>target){
                e--;
            }else if(sum<target){
                s++;
            }
    
        }
        return {-1,-1};
    }
};