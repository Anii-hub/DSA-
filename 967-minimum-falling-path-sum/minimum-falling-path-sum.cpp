class Solution {
public:
    int solve(vector<vector<int>>& matrix,int i,int j,int n,int m,vector<vector<int>>&dp){
        if(j<0 || j>=m)
        return 1e9;
        if(i==n-1)
        return matrix[n-1][j];
        if(dp[i][j]!=INT_MAX)
        return dp[i][j];
        int s=matrix[i][j]+solve(matrix,i+1,j,n,m,dp);
        int l=matrix[i][j]+solve(matrix,i+1,j-1,n,m,dp);
        int r=matrix[i][j]+solve(matrix,i+1,j+1,n,m,dp);
        return dp[i][j]= min(s,min(l,r));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        int mini=1e9;
        for(int j=0;j<m;j++){
            mini=min(mini,solve(matrix,0,j,n,m,dp));
            }
            return mini;
    }
};