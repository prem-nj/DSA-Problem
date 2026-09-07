class Solution {
public:
bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        int j=0;
        int i=0;
        int maxi=INT_MIN;
        int count=0;
        int n=s.length();
        while(j<n){
            if(isvowel(s[j])){
                count++;
            }
            if(j-i+1==k){
                maxi=max(maxi,count);
                if(isvowel(s[i])){
                    count--;
                }
                i++;
            }
            j++;
        }
        return maxi;
    }
};