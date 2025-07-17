class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int countzero=0;
        int i=0,j=0;
        int maxi=INT_MIN;
        int n=arr.size();
        while(j<n){
            if(arr[j]==0){
                countzero++;
            }
            while(countzero>k){
                if(arr[i]==0){
                    countzero--;
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
