class Solution {
public:
    int compress(vector<char>& chars) {
        int indx=0;
         int n=chars.size();
        for(int i=0;i<n;i++){
        int count=0;
            char ch=chars[i];
            while(i<n && chars[i]==ch){
              count++;
              i++;
            }
            if(count==1){
                chars[indx++]=ch;
            }else{
                 chars[indx++]=ch;
                 string s=to_string(count);
                 for(char d:s){
                    chars[indx]=d;
                    indx++;
                 }
            }
            i--;
        }
        
        
    // char.resize(indx);
    return indx;}
};