class Solution {
public:
    int rob(vector<int>& nums) {
        
     int n=nums.size(); 
       int prev2=0;
       int prev=nums[0];

       for(int i=1;i<n-1;i++){
        int take=nums[i];
        if(i>1){
            take+=prev2;
        }
        int notake=prev;
        int curri=max(take,notake);
        prev2=prev;
        prev=curri;
       }
    
    int max1=prev;


       int prev21=0;
       int prev1=nums[1];
       if (n == 1) return nums[0];

       for(int i=2;i<n;i++){
        int take1=nums[i];
        if(i>1){
            take1+=prev21;
        }
        int notake1=prev1;
        int curri1=max(take1,notake1);
        prev21=prev1;
        prev1=curri1;
       }

     int max21=prev1;

     return max(max1,max21);
 }

};