class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          int left1=0;
          int right1=nums1.size()-1;
          int left2=0;
          int right2=nums2.size()-1;
          vector<int>ans;


          while(left1<=right1 && left2<=right2){
            if(nums1[left1]<nums2[left2]){
               ans.push_back(nums1[left1]);
               left1++;
            }
            else if(nums1[left1]>=nums2[left2]){
                ans.push_back(nums2[left2]);
                left2++;
            }
          }
          while(left1<=right1){
            ans.push_back(nums1[left1]);
            left1++;
          }
          while(left2<=right2){
            ans.push_back(nums2[left2]);
            left2++;
          }
    

    int n=ans.size();
    double median=0.0;

          if(n % 2 == 1) {
        median = ans[n / 2];
              }
      else {
        median = (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
      }

      return median;
} 
};