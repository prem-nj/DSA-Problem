class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            if(s.empty()){
                s.push(arr[i]);
            }else if(s.size()>0 && ((s.top()<0 && arr[i]>=0) || (s.top()>=0 && arr[i]<0)) ) {
                s.pop();
            }else{
                s.push(arr[i]);
            }
        }
        
       while(!s.empty()){
           res.push_back(s.top());
           
           s.pop();
       }
       reverse(res.begin(),res.end());
       return res;
    }
};