class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int>res;
        int n=arr.size();
        unordered_map<int,int>count;
      for(int el :arr){
          count[el]++;
      }
        for(auto  i:count){
            if(i.second>n/3){
                res.push_back(i.first);
            }
        }
       // if (res.size() == 2 && res[0] > res[1])
       //  swap(res[0], res[1]);
        sort(arr.begin(),arr.end());
        return res;
        
    }
};