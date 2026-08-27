class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>res;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(candies[i]>maxi)
            maxi=candies[i];
        }
        for(int i=0;i<n;i++){
            if(candies[i] + extraCandies>=maxi)
            res.push_back(true);
            else
            res.push_back(false);
        }
        return res;
    }
};