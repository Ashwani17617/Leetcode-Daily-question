class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>m1;
        for(auto i:a){
            m1[i]++;
        }
        
        for(auto j:b){
            if(m1.find(j) != m1.end()){
               if(m1[j]>=1){
                   m1[j]--;
               }else{
                   return false;
               }
            }else{
                return false;
            }
        }
        
        return true;
    }
};