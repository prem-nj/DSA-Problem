class Solution {
  public:
  
  void insertsorted(stack<int>&st,int nu){
      if(st.empty()||st.top()<nu){
          st.push(nu);
          return;
      }
      
      int elm=st.top();
      st.pop();
      insertsorted(st,nu);
      st.push(elm);
  }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        
        int nu=st.top();
        st.pop();
        
        sortStack(st);
        insertsorted(st,nu);
        
    }
};
