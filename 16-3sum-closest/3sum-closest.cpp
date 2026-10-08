class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int best=nums[0]+nums[1]+nums[2];

      sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]){
            continue;
             }
        int j=i+1;
        int k =n-1;

        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];

            if(abs(sum-target)<abs(best-target))
              best=sum;

            if(sum<target){
                j++;
            }
            if(sum>target){
                k--;
            }
            else if(sum==target){
                return target ;
            }
            

         }
        }
      return best;
    }
};