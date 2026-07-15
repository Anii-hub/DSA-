class Solution {
public:
    bool isSafe(vector<string>&board,int row,int col,int n){
        int row1=row;
        int col1=col;
        while(col>=0 && row>=0){
            if(board[row][col]=='Q')
            return false;
            col--;
            row--;
        }
        row=row1;
        col=col1;
        while(col>=0){
            if(board[row][col]=='Q')
            return false;
            col--;
        }
        row=row1;
        col=col1;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
            return false;
            row++;
            col--;

        }
        return true;

            }
    void solve( vector<string>&board,int n,int col,vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                solve(board,n,col+1,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(board,n,0,ans);
        return ans;
    }
};