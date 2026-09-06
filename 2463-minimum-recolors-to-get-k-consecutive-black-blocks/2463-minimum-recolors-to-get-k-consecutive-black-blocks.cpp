class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0;
        int j=0;
        int mini=INT_MAX;
        int cntw=0;
        int n=blocks.length();
        while(j<n){
          if(blocks[j]=='W'){
            cntw++;
          }
          if(j-i+1==k){
            mini=min(mini,cntw);
            if(blocks[i]=='W'){
                cntw--;
            }
            i++;
          }
          j++;
        }
        return mini;
    }
};