class Solution {
public:
    bool isPalindrome(int x) {
        int digit=0;
        if (x < 0) return false; 
        long long  rev=0;
        int p=x;
        while(p>0){
        digit=p%10;
        rev=rev*10+digit;
        p=p/10;
        }
        if(rev!=x){
            return false;
        }
    return rev==x;}
};