class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int maj1=0;
        int maj2=0;
        int count1=0;
        int count2=0;
        List<Integer>res=new ArrayList<>();
          if (nums == null || nums.length == 0) {
            return new ArrayList<>();
        }
        for(int elem:nums){
            if(elem==maj1 ){
                count1++;
            }else if(elem==maj2){
                count2++;
            }else if(count1==0){
                maj1=elem;
                count1=1;
            }else if(count2==0){
                maj2=elem;
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
     int cnt1=0;
     int cnt2=0;
     for(int elem:nums){
        if(elem==maj1){
            cnt1++;
        }else if(elem==maj2){
            cnt2++;
        }
     }

     int n=nums.length/3;
     if(cnt1>n){
     res.add(maj1);
     }
     if(cnt2>n && maj2 != maj1){
     res.add(maj2);
     }
    
        return res;
    }
}