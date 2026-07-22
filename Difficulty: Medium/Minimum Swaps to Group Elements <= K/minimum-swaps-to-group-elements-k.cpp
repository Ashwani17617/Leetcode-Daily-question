class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int good=0;
        int bad=0;
        for(auto it: arr){
            if(it<=k){
                good++;
            }
        }
        for(int i=0;i<good;i++){
            if(arr[i]>k){
                bad++;
            }
        }
        
        //1 10 2 3 20 4 5
        //here we use the sliding window approach using this example i understand 
        
        int mini=bad;
        int j=0;
        for(int i=good;i<arr.size();i++){
            if(arr[i]>k) bad++; 
            if(arr[j]>k) bad--;
            mini=min(mini,bad);
            j++;
        }
        
        return mini;
    }
};
