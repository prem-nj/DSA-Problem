class Solution {
public:
    bool ispossible(vector<int>& nums, int p, int m) {
        int cnt = 0;
      
        for (int i =1; i < nums.size();) {
            if (nums[i] - nums[i-1] <= m) {
                i+=2;
                cnt++;
            }else{
                i++;
            }
            
        }

        return cnt >= p; /// same hai pattern
    }

        int minimizeMax(vector<int> & nums, int p) {
            sort(nums.begin(), nums.end());
            int s = 0;
            int e = nums.back() - nums.front();
            int ans = 0;

            while (s <= e) {
                int m = s + (e - s) / 2;

                if (ispossible(nums, p, m)) {
                    ans = m;
                    e = m - 1; // change in q miniimum
                } else {
                    s = m + 1;
                }
            }

            return ans;
        }
    };