class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int s=flowerbed.size();

        if (n == 0) {
            return true;
        }

        if (n>1 && flowerbed.size()==1) {
        
            return false;
        }



        if(s==1){
             return flowerbed[0]==0 && n==1 ? true : false;
        }


        int cnt = 0;

//handle first 

        if ((flowerbed[0] == 0 && flowerbed[1]==0) ) {
            cnt++;
            flowerbed[0]=1;
        
        }

        //handle last
          if (flowerbed[s-1] == 0 && flowerbed[s-2]==0)  {
            cnt++;
            flowerbed[s-1]=1;
        
        }
//handle midle
        for (int i = 1; i < flowerbed.size()-1; i++) {
            if(flowerbed[i]==1)continue;
            if (flowerbed[i] == 0) {

                if ( flowerbed[i + 1]==0 &&
                     flowerbed[i - 1] ==0 ) {
                    cnt++;
                    flowerbed[i] = 1;
                }
            }
        }
        return cnt >= n;
    }
};