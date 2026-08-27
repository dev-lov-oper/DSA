class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
       vector<int>ds;
        printS(0,ds,res,nums,n);
        return res;
    }

    void printS(int idx,vector<int>&ds,vector<vector<int>>&res,vector<int>&nums,int n){
        
        if(idx>=n){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        printS(idx+1,ds,res,nums,n);
        ds.pop_back();
     
         printS(idx+1,ds,res,nums,n);

    }
};