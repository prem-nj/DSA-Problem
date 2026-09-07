class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        int ans=0;
        int n=s.length();
        unordered_map<char,int>count;
        while(j<n){
         count[s[j]]++;
         maxi=max(maxi,count[s[j]]);
         if((j-i+1)-maxi>k){
            while((j-i+1)-maxi>k){
                count[s[i]]--;
                maxi=0;
                for(auto &pair:count){
                    maxi=max(maxi,pair.second);
                }
              i++;
            }
         }
         ans=max(ans,j-i+1);
         j++;
        }
        return ans;
    }
};