class Solution {
  public:
  
  void insertbottom(stack<int>&st,int m){
      
      if(st.empty()){
          st.push(m);
          return ;
      }
      
      int num=st.top();
      st.pop();
      
      
      insertbottom(st,m);
      st.push(num);
      
      
      
  }
  
  void reversek(stack<int>&St){
        if(St.empty()){
            return;
        }
    int num=St.top();
    St.pop();
    
       reversek(St);
       insertbottom(St,num);
       
       
      
  }
      
       
       
    void reverseStack(stack<int> &st) {
        // code here
        reversek(st);
    }
};