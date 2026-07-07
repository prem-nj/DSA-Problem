class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool containone = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                containone = true;
            }
            if(nums[i]>nums.size()||nums[i]<=0){
                nums[i]=1;
            }
        }
        if (containone == false) {
            return 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]);
            int idx = num - 1;
            if (nums[idx] < 0) {
                continue;
            }
            nums[idx] *= -1;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }

        return nums.size() + 1;
    }
};