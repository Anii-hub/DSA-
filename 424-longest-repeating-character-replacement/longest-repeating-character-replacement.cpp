class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int>ans(26,0);
        int i=0;
        int res=0;
        int maxf=0;
        int diff=0;
        int len=0;
        for(int j=0;j<n;j++){
            ans[s[j]-'A']++;
            len=j-i+1;
            maxf=max(maxf,ans[s[j]-'A']);
            diff=len-maxf;

            while((j-i+1)-maxf>k){
                ans[s[i]-'A']--;
                i++;     
            }
            res=max(res,j-i+1);

        }
        return res;
    }
};