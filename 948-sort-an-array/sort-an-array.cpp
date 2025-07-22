class Solution {
    private:
    void merge(vector<int>&nums,int n,int s,int e){

        int m=s+(e-s)/2;
        int len1=m-s+1;
        int len2=e-m;
        int *first=new int[len1];
        int *second=new int[len2];
        int main=s;
        for(int i=0;i<len1;i++){
         first[i]=nums[main++];
        }
        for(int j=0;j<len2;j++){
            second[j]=nums[main++];
        }
        //merge sorted arr
        int index1=0;
        int index2=0;
        main=s;
       
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[main++]=first[index1++];
            }else{
             nums[main++]=second[index2++];
            }
        }
        while(index1<len1){
            nums[main++]=first[index1++];
        }
        while(index2<len2){
            nums[main++]=second[index2++];
        }
       
    }
    void solve(vector<int>&nums,int n,int s,int e){

        //base case;
        if(s>=e){
            return ;
        }
        int m=s+(e-s)/2;
        solve(nums,n,s,m);
        solve(nums,n,m+1,e);
        merge(nums,n,s,e);
    }
public:

vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        solve(nums,n,0,n-1);
       return nums;
    }
};