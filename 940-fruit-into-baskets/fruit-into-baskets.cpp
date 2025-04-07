class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int j=0;
        int i=0;
        int maxi=INT_MIN;
        unordered_map<int,int>map;
        while(j<n){
            map[fruits[j]]++;
            if(map.size()>2){
                while(map.size()>2){
                    map[fruits[i]]--;
                    if(map[fruits[i]]==0){
                        map.erase(fruits[i]);
                    }
                    i++;
                }
            }
            maxi=max(maxi,j-i+1);
        j++;
        }
    return maxi;}
};