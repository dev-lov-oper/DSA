class Solution {
public:
// using tabulation
    int rob(vector<int>& nums) {
         int n=nums.size(); 
        vector<int>dp(n,-1);
        return f(0,nums,dp);
    }
    int f(int idx,vector<int>&nums,vector<int>&dp){
      int n=nums.size();
       dp[0]=nums[0];
       
       for(int i=1;i<n;i++){
         int take=nums[i];
         if(i>1){
            take+=dp[i-2];
         }
         int no_take=dp[i-1];

         dp[i]=max(take,no_take);
        }
       

        return dp[n-1];
    }
};