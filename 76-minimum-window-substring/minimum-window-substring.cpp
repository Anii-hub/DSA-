class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int mini=INT_MAX;
        int start=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        int count=t.size();
        int i=0;
        for(int j=0;j<n;j++){
            
            if(mpp[s[j]]>0)
            count--;
            mpp[s[j]]--;
            while(count==0){
                if((j-i+1)<mini){
                    mini=j-i+1;
                    start=i;
                }
                
            
            mpp[s[i]]++;
            if(mpp[s[i]]>0){
                count++;
            }
            i++;
            }
        }
        return mini == INT_MAX ? "" : s.substr(start,mini);
    }
};