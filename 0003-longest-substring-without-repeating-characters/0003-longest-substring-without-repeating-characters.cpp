class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        unordered_map<char,int>count;
        int i=0;
        int n=s.length();
        int maxi=INT_MIN;
        while(j<n){
            count[s[j]]++;
          
                while(count[s[j]]>1){
                    count[s[i]]--;
                    if(count[s[i]]==0){
                      count.erase(s[i]);
                    }
                    i++;
                }
       

            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi==INT_MIN? 0:maxi;
    }
};