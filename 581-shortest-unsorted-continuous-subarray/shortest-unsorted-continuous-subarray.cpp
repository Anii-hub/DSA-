class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
      while(left<n-1 && nums[left]<=nums[left+1]){
            left++;
        }
      while(right>0 && nums[right]>=nums[right-1]){
            right--;
        }
        if(left==n-1){
            return 0;
        }
      
     
    int l=INT_MAX;
    int r=INT_MIN;
    for(int i=left;i<=right;i++){
        l=min(l,nums[i]);
        r=max(r,nums[i]);
    }
    while( left >0  && nums[left-1]>l){
        left--;
    }
    while( right <n-1 && nums[right+1]<r){
        right++;
    }
        
        return right-left+1;
    }
};