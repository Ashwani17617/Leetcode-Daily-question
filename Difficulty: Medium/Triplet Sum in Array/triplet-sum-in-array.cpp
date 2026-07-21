class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<=n-2;i++){
            int left=i+1;
            int right=n-1;
            int find =target-arr[i];
            while(left<right){
                int sum=arr[left]+arr[right];
                if(sum==find){
                    return true;
                }else if(sum>find){
                    right--;
                }else{
                    left++;
                }
            }
        }
        return false;
        
    }
};

/*
TLE in this solution

int n=arr.size();
        for(int i=0;i<=n-3;i++){
            for(int j=i+1;j<=n-2;j++){
                int find=target-(arr[i]+arr[j]);
                for(int k=j+1;k<=n-1;k++){
                    if(find==arr[k]){
                        return true;
                    }
                }
            }
        }
        return false;
*/