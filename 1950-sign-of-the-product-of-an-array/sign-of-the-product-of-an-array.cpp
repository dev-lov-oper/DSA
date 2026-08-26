class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0;
        int neg=0;
        bool zero=false;
        for(int i=0;i<nums.size();i++){
           
             if(nums[i]<0){
                neg++;
            }
          if(nums[i]==0){
            zero=true;
            return 0;
          }
      
        }
        if(neg%2==0){
            return 1;
        }
      return -1;
    }
};