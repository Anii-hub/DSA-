class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        int diff=0;
        int res=0;
        int max_diff=INT_MAX;
        
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                diff=abs(sum-target);
                if(diff<max_diff){
                    max_diff=diff;
                    res=sum;
                }

                if(sum==target){
                    j++;
                    k--;

                }
                else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
            
        
        }
        return res;
    }
};