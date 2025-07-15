class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code hereint 
        int j=0,i=0;
        int n=s.size();
        int maxi=-1;
 unordered_map<char,int>count;
        while(j<n){
            count[s[j]]++;
            if(count.size()==k){
                maxi=max(maxi,j-i+1);
            }else if(count.size()>k){
                while(count.size()>k){
                    count[s[i]]--;
                    if(count[s[i]]==0){
                        count.erase(s[i]);
                    }
                    i++;
                }
            }
                j++;
            
            
        }
return maxi;
        
    }
};