class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int cnt=0;
        unordered_map<int,int>m1;
        for(int nums:arr){
            m1[nums]++;
        }
        
        for(auto val:m1){
            if(val.second>(n/k)){
                cnt++;
            }
        }
        return cnt;
    }
};