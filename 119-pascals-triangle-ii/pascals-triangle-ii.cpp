class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<vector<int>>result;
        int n=rowIndex;
        vector<int>firstrow(1,1);
        result.push_back(firstrow);

        for(int i=1;i<=n;i++){
          vector<int>prevrow=result[i-1];
          vector<int>row;
          row.push_back(1);

          for(int j=0;j<i-1;j++){
            row.push_back(prevrow[j]+prevrow[j+1]);
          }
          row.push_back(1);
          result.push_back(row);
        }
        return result.back();  
    }
};