class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        int maxi=*max_element(arr.begin(), arr.end());
        vector<int>res(maxi+1,0);
        for(int i=0;i<arr.size();i++){
            res[arr[i]]++;
        }
        int cnt=0;
        int val=0;
        for(int i=0;i<res.size();i++){
            if(res[i]>=1){
                cnt++;
                val=max(val,cnt);
            }else{
                cnt=0;
            }
        }
        return val;
    }
};