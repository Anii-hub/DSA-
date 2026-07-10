class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mpp;

        for(char c : s)
            mpp[c]++;

        int count = 0;
        bool hasOdd = false;

        for(auto p : mpp){

            int freq = p.second;

            if(freq % 2 == 0)
                count += freq;
            else{
                count += freq - 1;
                hasOdd = true;
            }
        }

        if(hasOdd)
            count++;

        return count;
    }
};