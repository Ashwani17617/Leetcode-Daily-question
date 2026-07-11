class Solution {
  public:
    void rotatearray(vector<int> &arr,int start,int end){
        int temp=0;
        while(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size()-1;
        rotatearray(arr,0,n);
        rotatearray(arr,1,n);
    }
};