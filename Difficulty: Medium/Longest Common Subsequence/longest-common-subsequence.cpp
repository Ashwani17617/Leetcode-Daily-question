class Solution {
  public:
    int lcs(string &s1, string &s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        vector<int> prev(m+1,0), curr(m+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    curr[j]=1+prev[j-1];
                }else{
                    curr[j]=max(prev[j],curr[j-1]);
                }
                
            }
            prev=curr;
            vector<int>curr(m+1,0);
        }
        return prev[m];
    }
};

/*
Recursion stack space overhead is the extra memory your computer uses to keep track of active function calls
So,Yes, tabulation is an optimized approach because it completely removes the recursion stack space overhead.

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

*/
