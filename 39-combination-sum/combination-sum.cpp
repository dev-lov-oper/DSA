class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombi(0,ans,ds,candidates,target);
        return ans;
    }
     

   void findcombi(int idx,vector<vector<int>>&ans,vector<int>ds,vector<int>&candidates,int target){
      // base case
       if(idx==candidates.size())
       {
        if(target==0){
            ans.push_back(ds);
        }
        
          return;
       }
     
     // pick the same element on first call & move index without picking in the second

     if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);
        findcombi(idx,ans,ds,candidates,target-candidates[idx]);
        ds.pop_back();
     }
     findcombi(idx+1,ans,ds,candidates,target);
    }
};