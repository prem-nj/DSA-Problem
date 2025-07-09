class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = -1;
        int count = 0;
        int n=nums.size();

        for (int elem : nums) {
            if (elem == maj) {
                count++;
            } else if (count == 0) {
                maj = elem;
                count = 1;
            } else {
                count--;
            }
        }
        //verifictaion of candidate
        int cnt=0;
        for(int el:nums){
            if(maj==el){
                cnt++;
            }
        }
        if(cnt>n/3){
            return maj;
        }else{
            return -1;
        }

    }
};