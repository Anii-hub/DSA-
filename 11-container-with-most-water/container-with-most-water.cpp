class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area=INT_MIN;

        while(i<j){
            int l=j-i;
            int b=min(height[i],height[j]);
            area=max(area,l*b);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
            
        }
        return area;
    }
};