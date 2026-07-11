class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size()-1;
        sort(arr.begin(),arr.end());
        int diff=arr[n]-arr[0];
        int maxi,mini;
        for(int i=1;i<=n;i++){
            if(arr[i]-k<0)continue;
            maxi=max(arr[i-1]+k,arr[n]-k);
            mini=min(arr[i]-k,arr[0]+k);
            diff=min(diff,maxi-mini);
        }
        return diff;
    }
};