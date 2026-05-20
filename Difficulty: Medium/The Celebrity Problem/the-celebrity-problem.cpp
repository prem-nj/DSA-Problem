class Solution {
    private:
     bool knws(vector<vector<int>>& mat, int a, int b){
                 int n=mat.size();
                 if(mat[a][b]==1){
                     return true;
                 }
                 return false;
     }
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int>s;
        int n=mat.size();
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knws(mat,a,b)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        int ans=s.top();
        bool rowcheck=false;
        bool colcheck=false;
        int cntzero=0;
        
        // FIX 1: Skip diagonal (i != ans) in row check
        for(int i=0; i<mat.size(); i++){
            if(i != ans && mat[ans][i] == 0){ 
                cntzero++;
            }
        }
        // FIX 2: Expect n-1 zeros (everyone except self)
        if(cntzero == n-1){ 
            rowcheck=true;
        }
        
        int cntone=0;
        // FIX 3: Skip diagonal (i != ans) in column check
        for(int i=0; i<n; i++){
            if(i != ans && mat[i][ans] == 1){ 
                cntone++;
            }
        }
        
        if(cntone == n-1){
            colcheck=true;
        }
        
        if(rowcheck==true && colcheck==true){
            return ans;
        }else{
            return -1;
        }
    }
};