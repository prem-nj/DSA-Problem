class Solution {
public:
    bool judgeSquareSum(int c) {
    long long s=0;
    long long e=sqrt(c);
    while(s<=e){
        long long sum=s*s+e*e;
        if(sum<c){
            s++;
        }else if (sum>c){
            e--;
        }else{
            return true;
        }
    }
    return false;}
};