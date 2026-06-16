class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mpp;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<n){
            mpp[s[j]]++;
            while(mpp[s[j]]>1){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
           
                ans=max(ans,j-i+1);
                j++;

        }
        return ans==INT_MIN ? 0 : ans;
    }
};