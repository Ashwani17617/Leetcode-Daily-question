class Solution {
  public:
    void swaparr(vector<int>& a, vector<int>& b,int left,int right){
        if(a[left]>b[right]){
            swap(a[left],b[right]);
        }
    }
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int size=n+m;
        int gap= (size/2)+(size%2);
        while(gap>0){
            int left =0;
            int right=left+gap;
            while(right<size){
                if(left<n && right>=n){
                    swaparr(a,b,left,right-n);
                }else if(left>=n){
                    swaparr(b,b,left-n,right-n);
                }else{
                    swaparr(a,a,left,right);
                }
                left++;
                right++;
            }
            if(gap==1)break;
            gap=(gap/2)+(gap%2);
        }
        
    }
};