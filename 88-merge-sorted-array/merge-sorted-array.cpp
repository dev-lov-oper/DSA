class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    // optimal sol

    int mid1=m-1;
    int last=m+n-1;
    int end2=n-1;

    while(end2>=0){
         if(mid1 >=0 &&nums1[mid1]>nums2[end2]){
            nums1[last]=nums1[mid1];
            mid1--;
            last--;
         }
         else{
            nums1[last]=nums2[end2];
            end2--;
            last--;
         }
    }
    }
};  