class Solution {
public:
    bool ispossible(int totalcmp, vector<int>& batteries, long long  m) {
        long long n = batteries.size();
        long long cnt_totaltime=0;

        for (long long btime : batteries) {
            if (btime < m) {
                cnt_totaltime += btime;
            } else {
                cnt_totaltime += m;
            }
        }
        return cnt_totaltime>=totalcmp*m;
    }
    long long maxRunTime(int totalcmp, vector<int>& batteries) {
        long long s = 1;
        long long n = batteries.size();
        long long e = 1e14;
        long long m = s + (e - s) / 2;
        long long ans = 0;
        while (s <= e) {
            if (ispossible(totalcmp, batteries, m)) {
                ans = m;
                s = m + 1;
            } else {
                e = m - 1;
            }
            m=s+(e-s)/2;
        }
        return ans;
    }
};