class Solution {
public:
    int solve(vector<vector<int>>& nums,int n,int i,int j,vector<vector<int>>&dp){
         if(i>=n)
        return 1e9;
        if(i==n-1 )
        return nums[n-1][j];
       
        if(dp[i][j]!=INT_MAX)
        return dp[i][j];
        int d=nums[i][j]+solve(nums,n,i+1,j,dp);
        int diag=nums[i][j] + solve(nums,n,i+1,j+1,dp);
        return  dp[i][j]=min(d,diag);

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        return solve(triangle,n,0,0,dp);
    }
};