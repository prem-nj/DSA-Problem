class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int maj=-1;
        int n=arr.size();
        int count=0;
        for(int ele:arr){
            if(ele==maj){
                count++;
            }else if(count==0){
                count=1;
                maj=ele;
            }else{
                count--;
            }
        }
       int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==maj){
                cnt++;
            }
        }
        if(cnt>n/2){
            return maj;
        }else{
            return -1;
        }
        
    }
};