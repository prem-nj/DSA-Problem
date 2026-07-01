class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int mini=INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
            
        }
        //fro second
        int secmin=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=mini){
                secmin=min(secmin,arr[i]);
            }
        }
        
        if(secmin==INT_MAX){
            return {-1};
        }
        
        return {mini,secmin};
        
    }
};