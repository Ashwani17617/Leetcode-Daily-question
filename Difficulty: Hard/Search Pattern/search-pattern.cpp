class Solution {
  public:
    void comp(string &pat ,vector<int>& lsp,int m){
        int i=1;
        int len=0;
        while(i<m){
            if(pat[i]==pat[len]){
                len++;
                lsp[i]=len;
                i++;
            }else{
                if(len!=0){
                    len=lsp[len-1];
                }else{
                    i++;
                }
            }
        }
    }
    vector<int> search(string &pat, string &txt) {
        // code here
        int n=txt.size();
        int m=pat.size();

        vector<int> matches;
        vector<int>lps(m,0);
        comp(pat,lps,m);
        
        if (m == 0 || n < m) return matches;
        
        int i = 0; // index for text
        int j = 0; // index for pattern

        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }
            if (j == m) {
                matches.push_back(i - j);
                j = lps[j - 1];
            } 
            else if (i < n && txt[i] != pat[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
    return matches;
        
    }
};