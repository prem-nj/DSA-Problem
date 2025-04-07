class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int rightsum = 0, maxsum = 0;

        for (int i = 0; i < k; i++) {
            rightsum += cardPoints[i];
        }

        maxsum = rightsum;

        int leftsum = 0;
        for (int i = 1; i <= k; i++) {
            rightsum -= cardPoints[k - i];
            leftsum += cardPoints[n - i];
            maxsum = max(maxsum, rightsum + leftsum);
        }

        return maxsum;
    }
};