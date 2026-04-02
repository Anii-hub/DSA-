class Solution {
public:
    bool isPalindrome(string s){
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>> temp;
        solve(0,s,ans,temp);
        return temp;
        
    }
    void solve(int i,string s,vector<string>&ans,vector<vector<string>>&temp){
       if(i==s.size()){
        temp.push_back(ans);
        return;
       }
       else{
        for (int j=i;j<s.size();j++){
            if(isPalindrome(s.substr(i,j-i+1))){
                ans.push_back(s.substr(i,j-i+1));
                solve(j+1,s,ans,temp);
                ans.pop_back();
                
            }
            
        }
       }
    }
};