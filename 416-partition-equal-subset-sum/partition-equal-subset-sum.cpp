class Solution {
public:
    bool solve(vector<int>& arr, int sum,int i,vector<vector<int>>&dp){

         if(sum==0)
        return true;
        if(i==arr.size())
        return false;
       
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        bool take=false;
        if(arr[i]<=sum){
            take=solve(arr,sum-arr[i],i+1,dp);
        }
        bool nottake=solve(arr,sum,i+1,dp);
        return dp[i][sum]= take||nottake;

        
    }
    bool canPartition(vector<int>& nums) {
         int n=nums.size();
         int sum=0;
         for(int i=0;i<n;i++){
            sum+=nums[i];
         }
        if(sum%2!=0)
        return false;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
       return solve(nums,sum/2,0,dp);
    }
    
};