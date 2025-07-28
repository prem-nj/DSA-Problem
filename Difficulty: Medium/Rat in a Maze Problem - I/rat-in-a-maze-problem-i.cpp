class Solution {
    private:
    void solve(vector<vector<int>>&maze,vector<string>&ans,int r,int c,string output
    , vector<vector<bool>>&visited,int n){
        if(r==n-1 && c==n-1){
            ans.push_back(output);
            return;
        }
        
        if(r<0 || c<0  || r>=n || c>=n ||maze[r][c]==0||visited[r][c]){
            return;
        }
        visited[r][c]=true;
        //u,d,l,r
        solve(maze,ans,r-1,c,output+"U",visited,n);
        solve(maze,ans,r+1,c,output+"D",visited,n);

        solve(maze,ans,r,c+1,output+"R",visited,n);
        solve(maze,ans,r,c-1,output+"L",visited,n);
        //bactrack
        visited[r][c]=false;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        int n=maze.size();

        int r=0;
        int c=0;
        if(maze[0][0]==0){
            return{} ;
        }
        string output="";
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        solve(maze,ans,0,0,"",visited,n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};