class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<int>c1(26,0);
        vector<int>c2(26,0);
        vector<int>ans;
      if(n>m){
        return ans;
      }
        for(int i=0;i<n;i++){
            c1[p[i]-'a']++;
            c2[s[i]-'a']++;
        }
        if(c1==c2){
            ans.push_back(0);
        }
        for(int i= n;i<m ;i++){
            c2[s[i]-'a']++;
            c2[s[i-n]-'a']--;
            int id=i-n+1;
            if(c1==c2){
                ans.push_back(id);
            }
        }
        return ans;
    }
};