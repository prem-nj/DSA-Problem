class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int j=0,i=0;
        int m=pushed.size();
        while(i<m &&j<m){
            s.push(pushed[i]);
            while(j<m && !s.empty()&& popped[j]==s.top() ){
                s.pop();


                j++;

            }
            i++;
        }
        return s.empty();
    }
};