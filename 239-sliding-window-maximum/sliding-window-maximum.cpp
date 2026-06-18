class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
       
        int i=0;
        int j=0;
        int maxi=0;
        map<int,int>mpp;
        vector<int> res;
        while(j<n){
            mpp[nums[j]]++;
            
            if(j-i+1==k){
                res.push_back(mpp.rbegin()->first);
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;

            }
            
            j++;
        }
        return res;
    }
};