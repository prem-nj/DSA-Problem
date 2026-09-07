class Solution {
public:
bool allzero(unordered_map<int,int>count){
    for(auto &pair:count){
        if(pair.second!=0){
            return false;
        }
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        unordered_map<int,int>count;
        for(auto &elm:p){
            count[elm]++;
        }
        int i=0;
        int j=0;
        vector<int>ans;
        while(j<n){
            count[s[j]]--;
            if(j-i+1==m){
                if(allzero(count)){
                    ans.push_back(i);
                }
                count[s[i]]++;
                i++;
            }
            j++;
        }

        return ans;
    }
};