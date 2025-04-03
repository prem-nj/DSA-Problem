class Solution {
public:
    string removeDuplicates(string s) {
        int j=0;
        int n=s.size();
        while(j<n-1){
            if(j<n-1){
                if(s[j]==s[j+1]){
                    s.erase(j,2);
                     if (j > 0) j--;
                }else{

                    j++;
                }
                
            }
            
        }
   return s; }
};