class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        int sum=0;
        unordered_set<int>s1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0) return true;
            if(s1.find(sum)!=s1.end()) return true;
            s1.insert(sum);
        }
        return false;
    }
};