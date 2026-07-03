class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>numset(nums.begin(),nums.end());
        vector<int>temp(numset.begin(),numset.end());
        int n=temp.size();
        if(n<=2){
          return temp[n-1];
        }else{
         return  temp[n-3];
        }

    }
};