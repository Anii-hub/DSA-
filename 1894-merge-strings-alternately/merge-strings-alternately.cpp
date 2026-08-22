class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int j=0;
        int i=0;
        string res="";
        while(i<n && j<m){
            res=res+word1[i]+word2[j];
            j++;
            i++;
        }
        while(i<n){
            res=res+word1[i];
            i++;
        }
        while(j<m){
            res=res+word2[j];
            j++;
        }
        return res;
    }
};