class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>cnt;
        unordered_map<char,int>patfreq,winfreq;
        for(char &ch:p){
            patfreq[ch]++;
        }
        int i=0;
        int j=0;
        while(j<n){
            winfreq[s[j]]++;
            if(j-i+1==m){
                if(winfreq==patfreq){
                    cnt.push_back(i);
                }
            winfreq[s[i]]--;

               if (winfreq[s[i]] == 0) {
                    winfreq.erase(s[i]);
                }
                
            i++;
            }
            j++;
        }
        return cnt;
    }
};