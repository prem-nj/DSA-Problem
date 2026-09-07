class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        vector<int>ans;
        deque<int>deq;
        int n=nums.size();
        while(j<n){
            while(!deq.empty() && nums[deq.back()]<nums[j]){
                deq.pop_back();

            }

            deq.push_back(j);

            if(j-i+1>k){
                if(deq.front()==i){
                    deq.pop_front();
                }
                i++;
            }
            if(j-i+1==k){
                ans.push_back(nums[deq.front()]);
        
            }
                j++;
        }
        return ans;
    }
};