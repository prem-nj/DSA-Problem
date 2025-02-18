class Solution {
public:
bool allzero( vector<int>&counter)
{
for(int i=0;i<counter.size();i++){
    if(counter[i]!=0){
        return false;
    }
}

return true;}
    vector<int> findAnagrams(string s, string p) {
        int i=0;
        int j=0;
        vector<int>ans;
        vector<int>counter(26,0);
        for(int i=0;i<p.length();i++){
            char ch=p[i];
            counter[ch-'a']++;
        }
        int n=s.length();
        while(j<n){
            counter[s[j]-'a']--;
            if(j-i+1==p.length()){
                if(allzero(counter)){
                    ans.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
       j++; }
   return ans; }
};