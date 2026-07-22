class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        float median=0;
        if(n%2==0){
            n=n-1;
            float first=ceil(n/2);
            float second=(n%2)+(n/2);
            median=(arr[first]+arr[second])/2.0;
        }else{
            n=n-1;
            median=arr[n/2];
        }
        return median;
    }
};