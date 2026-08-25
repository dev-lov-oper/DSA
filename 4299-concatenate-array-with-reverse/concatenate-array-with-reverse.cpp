class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(2*n);
        for(int i=0;i<n;i++){
           arr[i]=nums[i];
        }
        int l=n-1;
        for(int i=n;i<2*n;i++){
            arr[i]=arr[l];
            l--;
        }
     return arr;
    }
};