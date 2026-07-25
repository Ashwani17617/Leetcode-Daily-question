class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int i=0;
        int sum=0;
        while(k>0){
           sum+=arr[i];
           i++;
           k--;
        } 
        int j=0;
        int maxi=sum;
        for( ;i<arr.size();i++){
            
            sum-=arr[j];
            sum+=arr[i];
            maxi=max(maxi,sum);
            j++;
        }
        return maxi;
    }
};