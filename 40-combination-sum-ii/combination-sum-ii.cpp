class Solution {
public:
    void solve(vector<int>&arr,int target,int i,vector<vector<int>>&ans,vector<int>&temp){
        if(i==arr.size()){
            if(target==0)
            ans.push_back(temp);
            return;
        }
        if(arr[i]<=target){
            temp.push_back(arr[i]);
            solve(arr,target-arr[i],i+1,ans,temp);
            temp.pop_back();
        }
        int j=i+1;
        while(j<arr.size() && arr[j]==arr[i]){
            j++;
        }
         solve(arr,target,j,ans,temp); 

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,target,0,ans,temp);
        return ans;
    }
};