class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int j=0;
        int res=0;
        int maxi=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            maxi=max(maxi,mpp[s[i]]);
        
        while((i-j+1)-maxi>k){
            mpp[s[j]]--;
            j++;
            }
            res=max(res,i-j+1);
        }
        return res;
    }
};