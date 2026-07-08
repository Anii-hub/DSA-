class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        string res;
        for(int i=0;i<n;i++){
            if(st.empty() ||st.top().first!=s[i]){
                st.push({s[i],1});
            }
           
            else{
                st.top().second++;
               if(st.top().second==(k)) 
                st.pop();
                
            }
           
        }
        while(!st.empty()){
            pair<char,int>p=st.top();
            st.pop();
            while(p.second--){
                res.push_back(p.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};