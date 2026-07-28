class Solution {
  public:
    
    int sol(vector<vector<int>> &dp,int index1,int index2,string &s1, string &s2){
        
        if(index1<0 || index2<0 )return 0;
        
        if(dp[index1][index2]!= -1) return dp[index1][index2];
        if(s1[index1]==s2[index2]) {
          return dp[index1][index2]= 1+sol(dp,index1-1,index2-1,s1,s2);
        }
        
        return dp[index1][index2] =max(sol(dp,index1-1,index2,s1,s2),sol(dp,index1,index2-1,s1,s2));
    }
    int lcs(string &s1, string &s2) {
        // code here
        vector<vector<int>> dp(s1.size(),vector<int>(s2.size(),-1));
        return sol(dp,s1.size()-1,s2.size()-1,s1,s2);
    }
};
