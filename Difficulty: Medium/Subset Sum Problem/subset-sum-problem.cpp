class Solution {
  public:
    bool solve(int indx,vector<int>&arr,int sum){
        
        if(sum==0){
            return true;
        }
        
        if(sum<0|| indx>=arr.size()){
            return false;
        }
        int num=arr[indx];
        if(solve(indx+1,arr,sum-num)){
            return true;
        };
        if(solve(indx+1,arr,sum)){
            return true;
        };
        
        return false;
        
    }
     
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int indx=0;
       return  solve(indx,arr,sum);
            
        
        
    }
};