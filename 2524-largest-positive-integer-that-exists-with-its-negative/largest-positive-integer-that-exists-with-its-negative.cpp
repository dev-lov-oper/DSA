class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=check(nums,0,n-1);
        return k;

    }

    int check(vector<int>&nums,int l,int r){
      if (l >= r) return -1;
        
        int sum = nums[l] + nums[r];
        
       
        if (sum == 0) return nums[r];
        
       
        if (sum < 0) return check(nums, l + 1, r);
        
      
        return check(nums, l, r - 1);
    }
};