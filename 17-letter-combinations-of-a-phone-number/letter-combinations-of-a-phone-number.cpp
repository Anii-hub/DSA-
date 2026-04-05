class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mpp={
             {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string res="";
        vector<string>temp;
        solve(digits,0,digits.size(),temp,res,mpp);
        return temp;
    }
    void solve(string& digits,int i,int n,vector<string>&temp,string&res,unordered_map<char,string>&mpp){
        if(i==n){
            temp.push_back(res);
            return;
        }
        string choice=mpp[digits[i]];
        for(int j=0;j<choice.size();j++){
            res.push_back(choice[j]);
            solve(digits,i+1,n,temp,res,mpp);
            res.pop_back();
        }
    }
};