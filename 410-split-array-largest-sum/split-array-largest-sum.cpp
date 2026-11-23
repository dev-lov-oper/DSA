class Solution {
public:



    bool isallocated(int barrier,vector<int>&nums,int k){
        int pages=0;
        int s_alloc=1;
        int n=nums.size();

        for(int i=0;i<n;i++){
           if(nums[i]>barrier){
            return false;
           }
           if(nums[i]+pages>barrier){
            s_alloc++;
            pages=nums[i];

         }
           else{
            pages+=nums[i];
           }
        }
        if(s_alloc > k){
            return false;
        }
        return true;
    }



    int splitArray(vector<int>& nums, int k) {
        int low=0;
        int n=nums.size();
        int high=0;
       for(int x:nums){
        high+=x;
       }
        int res=-1;
         
        while(low<=high){
            int mid=(low+high)/2;

            if(isallocated(mid,nums,k)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};