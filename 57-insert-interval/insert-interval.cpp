class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n =intervals.size();
        vector<vector<int>> res;
        int nstart=newInterval[0];
        int nend=newInterval[1];
        
        
        bool insert=false;
      for(int i=0;i<n;i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
            if(insert==false && start>=nstart){
                res.push_back({nstart,nend});
                insert=true;
            }
            res.push_back({start,end});
      }
      if (!insert)
            res.push_back(newInterval);
      int start1=res[0][0];
        int end1=res[0][1];
      vector<vector<int>>ans;
      
       for(int i=1;i<res.size();i++){
            int start2=res[i][0];
            int end2=res[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                
            }
            else{
            ans.push_back({start1,end1});
            start1=start2;
            end1=end2;
            }
          
        }
        ans.push_back({start1,end1});
        return ans;
      
    }
};