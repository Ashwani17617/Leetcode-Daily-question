class Solution {
  public:
    int maxSubStr(string &s) {
        // code here
        int zero=0;
        int one=0;
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0'==0){
                zero++;
            }else{
                one++;
            }
            if(one==zero){
                cnt++;
                zero=0;
                one=0;
            }
        }
        if(cnt==0 || zero!=0 || one!=0)return -1;
        return cnt;
    }
    
};
