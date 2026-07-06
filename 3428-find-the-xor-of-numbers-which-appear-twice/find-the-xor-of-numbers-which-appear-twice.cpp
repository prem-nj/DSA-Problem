class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

         unordered_map<int,int>count;
       for(int x:nums){
        count[x]++;
       }
int ans=0;
       for(auto p:count){
        if(p.second==2){
            ans^=p.first;
        }
       }
       return ans;
        
    }
};