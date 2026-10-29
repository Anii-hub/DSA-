class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n=nums.size();
         unordered_set<int>st(nums.begin(),nums.end());
         int maxi=0;
         int num=0;
         int count=0;
         for(auto s : st){
            if(st.find(s-1)==st.end()){
                num=s;
                count=1;
            }
            while(st.find(num+1)!=st.end()){
                num++;
                count++;
            }
            maxi=max(maxi,count);
         }
         return maxi;
    }
};