class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
    if(n<=2){
        return n;
    }
      int e=2;

      for(int i=2;i<n;i++){
       
        if(nums[i]!=nums[e-2]){
            nums[e]=nums[i];
           
            e++;

        }

       

      }  
      return e;
    }
};