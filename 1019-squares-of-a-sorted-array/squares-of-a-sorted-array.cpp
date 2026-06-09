class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0;
        int right=n-1;
        int id=n-1;
        for(int i=0;i<n;i++){
            int l=nums[left]*nums[left];
            int r=nums[right]*nums[right];
            if(l>=r){
                ans[id--]=l;
                left++;
                
            }
            else{
                ans[id--]=r;
                right--;
            }
        }
        return ans;
    }
};