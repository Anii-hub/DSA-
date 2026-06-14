class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int left_max=0;
        int right_max=0;
        int area=0;
        while(i<j){
            if(height[i]>left_max){
                left_max=height[i];
            }
            if(height[j]>right_max)
            right_max=height[j];
            if(left_max < right_max){
                area+=left_max-height[i];
                i++;
            }
            else{
                area+=right_max-height[j];
                j--;
            }
        }
        return area;
    }
};