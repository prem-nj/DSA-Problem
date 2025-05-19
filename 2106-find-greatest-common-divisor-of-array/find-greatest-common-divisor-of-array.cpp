class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums[0];
        int n=nums.size();
        int l=nums[n-1];
        return gcd(s,l);
    }
};