class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        return  popcount((unsigned int)n);
    }
};