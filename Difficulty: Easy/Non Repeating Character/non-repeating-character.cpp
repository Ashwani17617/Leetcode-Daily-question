
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int n=s.size();
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i]-'a']==1){
                return s[i];
            }
        }
        return '$';
    }
};