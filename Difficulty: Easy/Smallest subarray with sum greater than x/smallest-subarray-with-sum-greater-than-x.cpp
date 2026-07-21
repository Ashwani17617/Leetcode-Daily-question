class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int i=0;
        int j=0;
        int sum=0;
        int mini=INT_MAX;
        while(j<n){
            sum+=arr[j];
            while(sum>x){
                mini=min(mini,j-i+1);
                sum=sum-arr[i];
                i++;
            }
            j++;
            
        }
        if(mini==INT_MAX) return 0;
        return mini;
    }
};