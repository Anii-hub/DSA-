class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end(),[](const auto &a,const auto & b){
            return a[1]<b[1];
        });
        int countO=1;
        
         int prev=points[0][1];
        for(int i=1;i<n;i++){
           
            if(prev<points[i][0]){
                countO++;
                prev=points[i][1]; 
            }
         
            }
        
        return countO;
    }
};