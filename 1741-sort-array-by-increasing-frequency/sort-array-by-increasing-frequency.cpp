class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>cp;
        for(int i=0;i<nums.size();i++){
            cp[nums[i]]++;

        }
      sort(nums.begin(),nums.end(),[&](int a,int b){
        if(cp[a]== cp[b]){
            return a>b;
        }
        return cp[a]<cp[b];
      });

     return nums;
    }
};