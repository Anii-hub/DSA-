class Solution {
public:
    int solve(vector<vector<int>>&nums ,int n,int m,int i,int j,vector<vector<int>>&dp){
        
         
       
        if(i>=n || j>=m)
        return 0;
         if(nums[i][j]==1)
        return 0;
         if(i==n-1 && j==m-1)
        return 1;

        if(dp[i][j]!=-1)
        return dp[i][j];
        
       
        int a1=solve(nums,n,m,i+1,j,dp);
        int a2=solve(nums,n,m,i,j+1,dp);
        return dp[i][j]= a1 + a2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(obstacleGrid,n,m,0,0,dp);
    }
};