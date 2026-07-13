class Solution {
public:
    void solve(vector<int>& candidates, int target,int n,int i,vector<vector<int>>&ans,vector<int>&temp){
        
        if(i==n){
            if(target==0)
            ans.push_back(temp);
        
            return;
        }
       
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],n,i,ans,temp);
            temp.pop_back();
        }
        solve(candidates,target,n,i+1,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,target,n,0,ans,temp);
        return ans;
    }
};