class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1;
        
        int i=0;
        int j=0;
        for(int i=0;i<a.size();i++){
            s1.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s1.insert(b[i]);
        }
        vector<int>a1;
        for(auto it:s1){
            a1.push_back(it);
        }
        return a1;
    }
};