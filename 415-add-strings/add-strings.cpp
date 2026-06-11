class Solution {
public:

   string add(string num1,string num2){
   int carry=0;
    int sum=0;
    string ans;
    int i1=num1.size()-1;
    int i2=num2.size()-1;
    while(i2>=0){
        sum=(num1[i1]-'0')+(num2[i2]-'0')+carry;
        carry=sum/10;
        char c=(sum%10)+'0';
        ans+=c;
        i2--;
        i1--;
    }
   
// if i1>=0
    while(i1>=0){
        sum=(num1[i1]-'0')+carry;
        carry=sum/10;
        char c=(sum%10)+'0';
         ans+=c;
        
        i1--;
    }
    if(carry){
        ans+='1';
    }

    reverse(ans.begin(),ans.end());
    return ans;
   }

 string addStrings(string num1, string num2) {
   if(num1.size()>num2.size()){
    return  add(num1,num2);
   }else{
    return add(num2,num1);
   }

   
    }
};