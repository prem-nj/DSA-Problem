class Solution {
public:
   void compute(vector<int>&lps,string &needle,int m){
 int len=0;
 lps[0]=0;
 int i=1;
 while(i<m){
    if(needle[i]==needle[len]){
      len++;
      lps[i]=len;
      i++;
    }else {
        if(len!=0){
            len=lps[len-1];
            
        }else{
            lps[i]=0;
            i++;
        }
    }
 }


   }
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int ans=-1;
        int n=haystack.length();
        int m=needle.length();
        if (m == 0) return 0; //  Edge case: If `needle` is empty, return 0.
        vector<int>lps(m,0);
        compute(lps,needle,m);
        while(i<n){
            if(needle[j]==haystack[i]){
                i++;
                j++;
            }
            if(j==m){
                return i - j;  
                j=lps[j-1];
            }else if( i < n && needle[j]!=haystack[i]){
              if(j!=0){
                j=lps[j-1];
              }else{
               
                i++;
              }
            }
 

        }

   return -1; }
};