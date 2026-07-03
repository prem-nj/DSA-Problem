class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        int n=s.size();
        int i=0;
        while(i<n){
            char ch=s[i];
            st.push(ch);
            i++;
        }
       int j=0;
        while(!st.empty()){
            s[j]=st.top();
            st.pop();
            j++;
        }
        
    }
};