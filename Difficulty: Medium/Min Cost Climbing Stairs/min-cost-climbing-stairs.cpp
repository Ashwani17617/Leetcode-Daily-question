//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n=cost.size();
        vector<int> v1(n,0);
        v1[0]=cost[0];
        v1[1]=cost[1];
        for(int i=2;i<n;i++){
            v1[i]=min(v1[i-1],v1[i-2])+cost[i];
        }
        return min(v1[n-1],v1[n-2]);
    }
};