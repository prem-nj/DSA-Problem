class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>res;
        
        unordered_map<int,int>count;
        for(int num:nums){
        if(++count[num]<=k){
            res.push_back(num);
        }
        }
        return res;
    }
};