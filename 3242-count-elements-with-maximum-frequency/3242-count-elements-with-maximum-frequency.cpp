class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> count;
        for (int elem : nums) {
            count[elem]++;
        }
        int maxi = INT_MIN;
        for (auto& pair : count) {
            maxi = max(pair.second, maxi);
        }

        int cnt = 0;

        for (auto& pair : count) {

            if (pair.second == maxi) {
                cnt++;
            }
        }

        return cnt*maxi;
    }
};