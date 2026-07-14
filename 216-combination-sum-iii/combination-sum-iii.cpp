class Solution {
public:
    void solve(vector<int>&arr,int target,int i,vector<vector<int>>&ans,vector<int>&temp,int count,int k){
        
            if(target==0 && count==k){
                ans.push_back(temp);
            return;
            }
            
        
        if(count>k || i==arr.size()||target<0){
            return;
        }

        if(arr[i]<=target){
            temp.push_back(arr[i]);
            solve(arr,target-arr[i],i+1,ans,temp,count+1,k);
            temp.pop_back();
        }
        int j=i+1;
        while(j<arr.size() && arr[j]==arr[i]){
            j++;
        }
         solve(arr,target,j,ans,temp,count,k); 

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int> candidates={1,2,3,4,5,6,7,8,9};
        int count=0;
        solve(candidates,n,0,ans,temp,count,k);
        return ans;
    }
};