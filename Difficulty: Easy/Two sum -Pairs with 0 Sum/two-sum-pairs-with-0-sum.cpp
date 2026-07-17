class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int left=0;
        vector<vector<int>> pairs;
        int right=arr.size()-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum<0){
                left++;
            }else if(sum>0){
                right--;
            }else{
                if (pairs.empty() || pairs.back() != vector<int>{arr[left], arr[right]}){
                    pairs.push_back({arr[left], arr[right]});
                }
                left++;
                right--;
            }
        }
        return pairs;
    }
};