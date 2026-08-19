class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int zerocount=0;
        int onecount=0;
        int i=0;
        int n=s.size();
        int maxi=-1;
        while(i<n){
            if(s[i]-'0'==0){
                zerocount++;
            }else if(s[i]-'0'==1) {
                onecount++;
            }
            maxi=max(maxi,zerocount-onecount);
            if(onecount>zerocount){
                onecount =0;
                zerocount=0;
            }
            i++;
        }
        return maxi;
    }
};