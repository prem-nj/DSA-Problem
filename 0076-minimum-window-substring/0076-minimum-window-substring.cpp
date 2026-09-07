class Solution {
public:
bool allzero(unordered_map<char,int>&count){
    for(auto  &pair:count){
        if(pair.second>0){
            return false;
    }
    }
    return true;
}
    string minWindow(string s, string t) {
        int i=0;
        int j=0;
        int si=0;
        int mini=INT_MAX;
        int n=s.length();
        int m=t.length();
        unordered_map<char,int>count;
        for(auto &elm:t){
            count[elm]++;
        }
        while(j<n){
            if(count.find(s[j])!=count.end()){
                count[s[j]]--;
            }
            while(allzero(count)){
                if(j-i+1<mini){
                    mini=j-i+1;
                    si=i;
                }
                if(count.find(s[i])!=count.end()){
                    count[s[i]]++;
                }
                i++;
            }
            j++;
        }
        return mini==INT_MAX? "":s.substr(si,mini);
    }
};