class Solution {
  public:
    bool reverse(int n){
        int number1=n;
        int rem=0;
        int number=0;
        while(n>0){
            rem=n%10;
            number=rem+number*10;
            n=n/10;
        }
        if(number1==number)return true;
        return false;
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(reverse(arr[i])==false){
                return false;
            }
        }
        return true;
    }
};