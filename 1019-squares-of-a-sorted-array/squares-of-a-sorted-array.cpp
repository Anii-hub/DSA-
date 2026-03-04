class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
         int m=a.size();
        int k=b.size();
        vector<int> ans(m+k);
        
        if(a.size()==0){
            for(int i=0;i<b.size();i++){
                b[i]=b[i]*b[i];
                
            }
            reverse(b.begin(),b.end());
            return b;
        }
         if(b.size()==0){
            for(int i=0;i<a.size();i++){
                a[i]=a[i]*a[i];
                
                
            }
            
                return a;

        }
        int i=0;
        int j=0;
       
        int id=0;
        for(int i=0;i<m;i++){
            a[i]=a[i]*a[i];
        }
        for(int i=0;i<k;i++){
            b[i]=b[i]*b[i];
            
        }
        reverse(b.begin(),b.end());
            while(i<m && j<k){
                if(a[i]<=b[j]){
                    ans[id]=a[i];
                    i++;
                    id++;
                }
                else{
                    ans[id]=b[j];
                    j++;
                    id++;
                }
            }
            while(i<m){
                ans[id]=a[i];
                i++;
                id++;
            }
            while(j<k){
                ans[id]=b[j];
                j++;
                id++;
            }
            return ans;

        
    }
};