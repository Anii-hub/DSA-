class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<int>one(26,0);
        vector<int>two(26,0);
        if(n>m){
            return false;
        }
        for(int i=0;i<n;i++){
            one[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            two[s2[i]-'a']++;
        }
        if(one==two)
        return true;
        for(int i=n;i<m;i++){
            two[s2[i]-'a']++;
            two[s2[i-n]-'a']--;
             if(one==two)
              return true;
        }
        return false;
    }
};