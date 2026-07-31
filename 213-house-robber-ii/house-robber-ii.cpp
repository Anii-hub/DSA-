class Solution {
public:
  int solve(vector<int>& nums,int i,int end,vector<int>&dp){
        if(i>end)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int take=nums[i]+solve(nums,i+2,end,dp);
        int nottake=solve(nums,i+1,end,dp);
        dp[i]= max(take,nottake);
         return dp[i];
    }
    int rob(vector<int>& nums) {
         int n=nums.size();
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
       
        if(n==1)
        return solve(nums,0,n-1,dp1);
       
        return max(solve(nums,0,n-2,dp1),solve(nums,1,n-1,dp2));
        
    }
};