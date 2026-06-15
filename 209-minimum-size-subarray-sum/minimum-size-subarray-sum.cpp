class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int mini=INT_MAX;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                int len=j-i+1;
                mini=min(mini,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        else
        return mini;
    }
};