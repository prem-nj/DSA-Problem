class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int count1=0;
        int maj1=0;
         int maj2=0;
         int count2=0;
         for(int elem:nums){
            if(elem==maj1){
                count1++;
            }else if(elem==maj2){
                count2++;
            }else if(count1==0){
              maj1=elem;
              count1=1;
            }else if(count2==0){
                maj2=elem;
                count2=1;
            }else{
                count1--;
                count2--;
            }
         }
         int cnt1=0;
         int cnt2=0;
         for(int num:nums){
            if(num==maj1){
                cnt1++;
            }else if(num==maj2){
                cnt2++;
            }
         }


         int m=n/3;
         if(cnt1>m){
            res.push_back(maj1);
         }
         if(cnt2>m && maj1!=maj2){
            res.push_back(maj2);
         }
        return res;
    }
};