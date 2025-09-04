class Solution {
  public:
  int m,n;
  vector<vector<int>>direction{{1,0},{0,1},{-1,0},{0,-1}};
  bool find(int i,int j,vector<vector<char>>&mat,string &word,int index){
      if(index==word.length()){
          return true;
      }
      if(i<0||i>=n||j<0||j>=m||mat[i][j]=='$'){
          return false;
      }
      if(mat[i][j]!=word[index]){
          return false;
      }
      char temp=mat[i][j];
      mat[i][j]='$';
      for(auto dir:direction){
          int imove=i+dir[0];
          int jmove=j+dir[1];
     if( find(imove,jmove,mat,word,index+1)){
         return true;
     }
      }
      mat[i][j]=temp; 
      return false;
  }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        n=mat.size();
        m=mat[0].size();
        int index=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==word[0] && find(i, j,mat,word,index)){
                    return true;
                }
            }
        }
        return false;
    }
};