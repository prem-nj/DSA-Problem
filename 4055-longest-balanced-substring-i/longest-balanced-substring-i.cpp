class Solution {
public:
bool checked(vector<int>freq){
     int com=0;
    for(int i=0;i<26;i++){
     if(freq[i]==0){
        continue;
     }
     if(com==0){
       com=freq[i];

     }else if(freq[i]!=com){
        return false;
     }

    }
    return true;
}
    int longestBalanced(string s) {
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++){
                vector<int>freq(26,0);
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;
                if(checked(freq)){
                    maxi=max(maxi,j-i+1);
                }
                
            }
        }
        return maxi;
    }
};