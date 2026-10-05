class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target=nums.size()-1;
        bool goal=false;
        if(nums.size()<2){
            return true;
        }

        for(int i=target-1;i>=0;i--){
            if(i+nums[i]>=target){
                target=i;

            }
        }
        return target==0;
    }
};