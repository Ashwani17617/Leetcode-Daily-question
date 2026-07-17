class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int>v1;
        int n=a.size();
        int m=b.size();
        int r=c.size();
        int i=0,j=0,k=0;
        vector<int> store;
        while(i<n && j<m && k<r){
            if(a[i]==b[j]&& b[j]==c[k] && a[i]==c[k]){
                if(store.empty() || store.back()!=a[i]){
                    store.push_back(a[i]);
                }
                i++;
                j++;
                k++;
            }else if(a[i]<=b[j] && a[i]<=c[k]){ //a[i]=6,b[j]=6,c[k]=7 if two element are same then third element is bigger 
                i++;
            }else if(b[j]<=a[i] && b[j]<=c[k] ){
                j++;
            }else{
                k++;
            }
        }
        return store;
    }
};