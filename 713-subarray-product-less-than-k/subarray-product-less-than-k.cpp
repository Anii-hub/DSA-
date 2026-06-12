class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        int count=0;
        int prod=1;
        if(k<=1){
            return 0;
        }
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(prod>=k){
                prod/=nums[j];
                j++;
            }
            count+=(i-j+1);
        }
        return count;
    }
};