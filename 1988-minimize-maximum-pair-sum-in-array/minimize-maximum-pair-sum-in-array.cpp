class Solution {
public:
    int minPairSum(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        int e=n-1;
         int maxi=INT_MIN;
         sort(arr.begin(),arr.end());
        while(s<e){
             int sum=arr[s]+arr[e];
             if(sum >maxi){
                maxi=sum;
                s++;
                e--;
             }else{
                s++;
                e--;
             }
            
        
        }
          
          
      return maxi;}
};