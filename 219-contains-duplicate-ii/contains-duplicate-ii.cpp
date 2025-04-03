class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>count;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count.find(nums[i])!=count.end()){
                return true;
            }
            count.insert(nums[i]);
            if(i>=k){
               count.erase(nums[i-k]); 
            }
        }
    return false; }
};