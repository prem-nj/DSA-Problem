class Solution {
  public:
  void solve(int i,int j,vector<string>&res,string ans,vector<vector<int>>& maze,vector<vector<bool>>& visited){
  int n=maze.size();
  int m=maze[0].size();
      
      if(i==n-1 && j==m-1){
          res.push_back(ans);
          return;
      }
      
      if(i<0||i>=n ||j<0||j>=m||visited[i][j]|| maze[i][j] == 0){
          return;
      }
      visited[i][j]=true;
      
      solve(i+1,j,res,ans+'D',maze,visited);
      solve(i-1,j,res,ans+'U',maze,visited);
      solve(i,j-1,res,ans+'L',maze,visited);
      solve(i,j+1,res,ans+'R',maze,visited);
      
      visited[i][j]=false;
      
      
      
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code herevec
        int n=maze.size();
        int m = maze[0].size();
        string ans="";
         if (maze.empty() || maze[0].empty()) {
            return {};
        }
        vector<string>res;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
    
      solve(0,0,res,ans,maze,visited);
          sort(res.begin(), res.end());
      return res;
    }
};