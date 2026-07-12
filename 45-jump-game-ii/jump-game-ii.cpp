class Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        int maxindex=arr[0];
        int step=arr[0];
        int jump=1;
        if(n==1)return 0;
        if(arr[0]==0)return -1;
        for(int i=1;i<n;i++){
            if(i==n-1) return jump;
            maxindex=max(maxindex,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                step=maxindex-i;
            }
        }
        return jump;
    }
};