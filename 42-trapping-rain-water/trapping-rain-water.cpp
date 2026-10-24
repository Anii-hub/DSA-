class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int sum=0;
        int leftmax=0;
        int rightmax=0;
        while(i<j){
            if(height[i]>leftmax){
                leftmax=height[i];
            }
            if(height[j]>rightmax){
                rightmax=height[j];
            }
            if(leftmax < rightmax){
                sum+=leftmax-height[i];
                i++;
            }
            else{
                sum+=rightmax-height[j];
                j--;
            }
        }
        return sum;
    }
};