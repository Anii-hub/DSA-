class Solution {
public:
    int binarySearch(int beg,int end,int target,vector<int>&nums){
        
        if(beg>end){
            return -1;
        }
        int mid=beg+(end-beg)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return binarySearch(beg,mid-1,target,nums);
        }
        else{
            return binarySearch(mid+1,end,target,nums);
        }
       
        }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarySearch(0,n-1,target,nums);
    }
};