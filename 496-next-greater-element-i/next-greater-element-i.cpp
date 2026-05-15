class Solution {
public:
    vector<int>nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int>res;
     stack<int>s;
     int n=nums2.size();
     for(int i=n-1;i>=0;i--){
          if(s.empty()){
            res.push_back(-1);
          }else if(s.size() && s.top()>nums2[i]){
            res.push_back(s.top());
          }else if(s.size()>0 && s.top()<=nums2[i]){
            while(s.size()>0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.size()==0){
                res.push_back(-1);
            }else{
                res.push_back(s.top());
            }
          }
          s.push(nums2[i]);
      }   
      reverse(res.begin(),res.end());
      unordered_map<int,int>map;
      for(int i=0;i<nums2.size();i++){
        map[nums2[i]]=res[i];
      }
      vector<int>ans;
      for(int x:nums1){
        ans.push_back(map[x]);
      }
      return ans;

    }
};