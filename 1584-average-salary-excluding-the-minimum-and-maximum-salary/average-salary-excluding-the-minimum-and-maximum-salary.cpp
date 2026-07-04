class Solution {
public:
    double average(vector<int>& salary) {
        double maxelem=*max_element(salary.begin(),salary.end());
        double minelem=*min_element(salary.begin(),salary.end());
        double sum=accumulate(salary.begin(),salary.end(),0);
        double avg=(sum-(maxelem+minelem))/(salary.size()-2);
        return avg;
    }
};