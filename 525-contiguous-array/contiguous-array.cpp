class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int res=0;
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                one++;
            }
            int diff=zero-one;
            if(diff==0){
                res=max(res,i+1);
            }
            if(mpp.find(diff)!=mpp.end()){
                res=max(res,i-mpp[diff]);
            }
            else{
                mpp[diff]=i;
            }
            
        }
        return res;
    }
};