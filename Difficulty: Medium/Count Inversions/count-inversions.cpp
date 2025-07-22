class Solution {
  private:
  
  int merge(vector<int>&arr,int s,int e,int m){
    
      int len1=m-s+1;
      int len2=e-m;
      
      int *first=new int[len1];
      int *second=new int[len2];
      int main=s;
      for(int i=0;i<len1;i++){
          first[i]=arr[s+i];
          
      }
      for(int j=0;j<len2;j++){
          second[j]=arr[m+1+j];
      }
      
      int index1=0; int index2=0;
      int count=0;
      while(index1<len1 && index2<len2){
          if(first[index1]<=second[index2]){
              //no inversion
               arr[main++]=first[index1++];
          }else{
              count+=len1-index1;
              arr[main++]=second[index2++];
          }
      }
      while(index1<len1){
          arr[main++]=first[index1++];
      }
      while(index2<len2){
          arr[main++]=second[index2++];
      }
        delete[] first;
        delete[] second;
      
      return count;
  }
  int solve(vector<int>&arr,int s,int e){
      //base;
      if(s>=e){
          return 0;
      }
      int count=0;
       int m=s+(e-s)/2;
       count+=solve(arr,s,m);  
       count+=solve(arr,m+1,e);
       count+=merge(arr,s,e,m);
      return count;
  }
  public:
    int inversionCount(vector<int> &arr) {
        int n=arr.size();
        // Code Here
         return solve(arr,0,n-1);
        
    }
};