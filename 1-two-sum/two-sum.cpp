class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
          int sec=target-nums[i];   
          if(map.find(sec)!=map.end()){
            return {map[sec],i};
          }
          map[nums[i]]=i;
         }
    return {};}
};