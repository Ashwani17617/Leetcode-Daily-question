class Solution {
  public:
    int ans=0;
    int func(vector<int>& height,int n,vector<int> &dp){
        if(n==0) return 0;
        if(dp[n]!=-1)return dp[n];
        int left=func(height,n-1,dp)+abs(height[n]-height[n-1]);
        int right=INT_MAX;
        if(n>1){
           right=func(height,n-2,dp)+abs(height[n]-height[n-2]); 
        }
        return dp[n]= min(left,right);
        
    }
    int minCost(vector<int>& height) {
        // Code here
        
        int n=height.size()-1;
        vector<int>dp(n+1,-1);
        return func(height,n,dp);
    }
};