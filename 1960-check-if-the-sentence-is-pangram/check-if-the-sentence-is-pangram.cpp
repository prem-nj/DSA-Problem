class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>count;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]<'a'){
                return false;
            }else{
                count[sentence[i]]++;
              

            }
        }

       if(count.size()!=26){
        return false;
       }
       return true;
    }
};