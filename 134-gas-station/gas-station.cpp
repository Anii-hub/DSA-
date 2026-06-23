class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total=0;
        int tank=0;
        int start=0;
        for(int i=0;i<n;i++){
            int c=gas[i]-cost[i];
            total+=c;
            tank+=c;
            if(tank<0){
                start=i+1;
                tank=0;
            }
        }
        return total>=0?start:-1;
        
    }
};