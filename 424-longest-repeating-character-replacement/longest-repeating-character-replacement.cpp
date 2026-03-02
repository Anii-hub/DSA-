class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int j=0;
        int res=0;
        int maxi=0;
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'A']++;
            maxi=max(maxi,freq[s[i]-'A']);
        
        while((i-j+1)-maxi>k){
            freq[s[j]-'A']--;
            j++;
            }
            res=max(res,i-j+1);
        }
        return res;
    }
};