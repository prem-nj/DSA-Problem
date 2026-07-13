class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>map;
        

        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
       int r=1;
       for(int i=0;i<temp.size();i++){
          if(map.find(temp[i])==map.end()){
            map[temp[i]]=r++;
          }
         
       }

       for(int i=0;i<arr.size();i++){
        arr[i]=map[arr[i]];
       }
return arr;
    }
};