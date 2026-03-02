class Solution {
public:
    static bool compare(int &a,int &b){
        int ca=__builtin_popcount(a);
        int cb =__builtin_popcount(b);
        if(ca==cb){
            return a<b;
        }
        return ca<cb;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
    
};