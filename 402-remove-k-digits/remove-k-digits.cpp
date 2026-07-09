class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        if(k>=n){
            return "0";
        }
        if(k==0){
            return num;
        }
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
              if(st.size()==1 && num[i]=='0'){
            st.pop();
        }
        }
      
        while(k && !st.empty()){
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        if(res.empty()){
            return "0";
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};