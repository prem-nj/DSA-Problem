class Solution {
public:

    vector<vector<string>>result;
     bool isvalide(vector<string>&board,int row ,int col){
    int n=board.size();
        //up
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q'){return false;}
        }
         //left diagnol
        for(int i=row,j=col;j>=0&&i>=0;i--,j--){
            if(board[i][j]=='Q'){return false;}
        }
          //rigth diagnol
        for(int i=row,j=col;j<n &&i>=0;i--,j++){
            if(board[i][j]=='Q'){return false;}
        }
      return true;
     }

    void solve(vector<string>&board,int row){
        //base case 
        if(row>=board.size()){
            result.push_back(board);
            return ;
        }
        for(int i=0;i<board.size();i++){

            if (isvalide(board, row , i)){


            board[row][i]='Q';

            solve(board,row+1);
            board[row][i]='.';
            }

        }

    }



    vector<vector<string>> solveNQueens(int n) {
        if(n==0){
            return{};
        }
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        return result;
    }
};