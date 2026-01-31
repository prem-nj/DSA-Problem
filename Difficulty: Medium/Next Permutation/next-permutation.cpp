class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int pivot=-1;
        int n=arr.size();
        for(int i=n-1;i>0;i--){
            if(arr[i]>arr[i-1]){
                pivot=i-1;
                break;
            }
        }
        if(pivot==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
        for(int j=n-1;j>pivot;j--){
            if(arr[pivot]<arr[j]){
                swap(arr[pivot],arr[j]);
                break;
            }
        }
        reverse(arr.begin()+pivot+1, arr.end());
        
    }
        
    };
                                         