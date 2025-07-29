class Solution {
  public:
    int swapNibbles(int n) {
   
        // code here
        //Step19
        int last=(n&0x0F);
        last=(last<<4);
        int firs=(n&0xF0);
       firs=(firs>>4);
        return firs|last;
    

    }
};