class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long best = INT_MIN;
        long long maxi=1;
        long long mini=1;

        for(long long num : nums){
            long long temp=num*maxi;
           maxi=max({temp,mini*num,num});
            mini=min({temp,mini*num,num});

            best=max(maxi,best);
        }
        return best;
    }
};