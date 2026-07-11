class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]<arr[i+1]){
                i++;
            }
            else{
                break;
            }
        }
        return i;
    }
};