class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
      \
        int prev=0;
        int prev2=0;
        for(int i=n-1;i>=0;i--){
            int take=nums[i]+prev2;
            int nottake=prev;
            int curr=max(take,nottake);
            prev2=prev;
            prev=curr;
            
        }
        return prev;
    }
};