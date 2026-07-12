class Solution {
public:
    int maxi(vector<int>& piles){
        int n=piles.size();
        int maximum=0;
        for(int i=0;i<n;i++){
            if(piles[i]>maximum)
            maximum=piles[i];
        }
        return maximum;
    }
    int totaltime(vector<int>& piles, int h){
        int n=piles.size();
        int t=0;
        for(int i=0;i<n;i++){
            t+=ceil(double(piles[i])/h);
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=maxi(piles);
        int i=1;
        int j=n;
        while(i<j){
            int mid=i+(j-i)/2;
            int t=totaltime(piles,mid);
            if(t>h){
                i=mid+1;
            }
            else{
                j=mid;
            }
            
        }
        return i;
    }
};