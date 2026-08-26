class Solution {
public:
    int arraySign(vector<int>& nums) {
       return solve(nums,0,0);
    }

    int solve(vector<int>&nums,int idx,int neg_c){

        if(idx==nums.size()){
            return (neg_c%2==0 )? 1:-1;
        }
       if(nums[idx]==0){
        return 0;
       }
       if(nums[idx]<0){
        neg_c++;
       }
      
      return solve(nums,idx+1,neg_c);
       
    }
};