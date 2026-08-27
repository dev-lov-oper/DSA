class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int n=nums.size();
         sort(nums.begin(),nums.end());
       set<vector<int>>res;
       vector<int>ds;
        printS(0,ds,res,nums,n);
        return vector<vector<int>>(res.begin(),res.end());
    }
    
    void printS(int idx,vector<int>&ds,set<vector<int>>&res,vector<int>&nums,int n){
        
        if(idx>=n){
            res.insert(ds);
            return;
        }
        ds.push_back(nums[idx]);
        printS(idx+1,ds,res,nums,n);
        ds.pop_back();
     
         printS(idx+1,ds,res,nums,n);

    }
    
};