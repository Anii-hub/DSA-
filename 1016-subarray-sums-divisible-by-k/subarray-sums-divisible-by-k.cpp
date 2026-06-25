class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int count=0;
        int presum=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remainder=presum%k;
            if(remainder<0){
                remainder+=k;
            }
            count+=mpp[remainder];
            mpp[remainder]++;
        }
        return count;
    }
};