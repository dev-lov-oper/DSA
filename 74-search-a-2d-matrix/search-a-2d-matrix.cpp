class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // flatten the 2d array into 1d(imaginary) & apply binary search
        int n=matrix.size();
        int m=matrix[0].size();

        int beg=0;
        int high=m*n-1;
        int mid;
        while(beg<=high){
          mid=(beg+high)/2;
          int row=mid/m;
          int col=mid%m;
          if(matrix[row][col]==target){
            return true;
          }
          else if(matrix[row][col]<target){
            beg=mid+1;
          }
          else{
            high=mid-1;
          }

        }
        return false;
    }
};