class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        set<int>st;
        for(int x:arr){
            if(!st.insert(x).second){ //insertion fails means there is some elem
                return true;
            }
            st.insert(x);
        }
        return false;
        
    }
};
