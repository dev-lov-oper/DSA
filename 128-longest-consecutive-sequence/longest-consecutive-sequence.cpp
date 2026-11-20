class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

     // brute force
     int n = nums.size();
     if(nums.size()==0)
       return 0;
     sort(nums.begin(),nums.end());
     int count=1;
     int maxi=1;


     for(int i=0;i<n-1;i++)
     {
        if(nums[i+1]==nums[i]){
            continue;
        }
       if(nums[i+1]-nums[i]==1){
          count++;
          maxi=max(count,maxi);
       }
       else{
        count=1;
       }
 }         



     return maxi;

    }
};