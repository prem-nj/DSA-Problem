class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int maj1=-1;
        int maj2=-1;
        int count1=0;
        int count2=0;
        for(int ele:nums){
            if(ele==maj1){
                count1++;
            }else if(ele==maj2){
                count2++;
            }else if(count1==0){
                count1=1;
                maj1=ele;
            }else if(count2==0){
                count2=1;
                maj2=ele;
            }else{
                count1--;
                count2--;
            }
            
        }
        int cnt1=0 ,cnt2=0;
        for(int ele:nums){
            if(ele==maj1){
               cnt1++;
            }else if(ele==maj2){
                cnt2++;
            }
        }
        if(cnt1>n/3){
            
            res.push_back(maj1);
        } 
        if (cnt2>n/3 && maj1!=maj2){
            res.push_back(maj2);
        }
        if(res.size()==2 && res[0]>res[1]){
            swap(res[0],res[1]);
        }
        return res;
    }
};