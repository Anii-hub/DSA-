class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int first=nums[i];
            int sum=target-first;
            if(mpp.find(sum)!=mpp.end()){
                return {i,mpp[sum]};
            }
            mpp[first]=i;
        }
        return {-1,-1};
    }
};