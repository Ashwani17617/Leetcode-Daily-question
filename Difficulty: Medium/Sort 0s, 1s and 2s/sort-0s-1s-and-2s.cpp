class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        int k=arr.size()-1;
        while(arr[k]==2 && k>0){
            k--;
        }
        while(j<=k){
            if(arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }else if(arr[j]==1){
                j++;
            }else if(arr[j]==2){
                swap(arr[j],arr[k]);
                k--;
            }
        }
    }
};