class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int prefix=1;
        int suffix=1;
        int maxi=INT_MIN;
        int n=arr.size()-1;
        
        for(int i=0;i<arr.size();i++){
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
            
            prefix*=arr[i];
            suffix*=arr[n-i];
            
            maxi=max(maxi,max(suffix,prefix));
        }
        return maxi;
    }
};