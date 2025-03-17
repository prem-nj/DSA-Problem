class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int s=0;
        sort(people.begin(),people.end());
        int n=people.size();
        int boatcnt=0;
        int e=n-1;
        while(s<=e){
            if(people[s]+people[e]<=limit){
             boatcnt++;
             s++;
             e--;
             
            }else{
                e--;
                
          boatcnt++;
            }

        }

    return boatcnt;}
};