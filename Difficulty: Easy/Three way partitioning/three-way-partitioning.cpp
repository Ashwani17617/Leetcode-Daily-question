class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        // this problem is related Dutch National Flag problem in which we use the three pointer concept.
        int low=0;
        int high=arr.size();
        int mid=0;
        while(mid<=high){
            if(arr[mid]<a){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }else if(arr[mid]>b){
                swap(arr[mid],arr[high]);
                high--;
            }else{
                mid++;
            }
        }
    }
};