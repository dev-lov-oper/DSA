class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long MOD = 1e9 + 7;
        long long even=1;
        long long odd=0;
        long long count=0;
        long long sum=0;

        for(int x:arr){
            sum=(sum+x)%2;
            if(sum){
                count+=even;
                odd++;
            }
            else{
                count+=odd;
                even++;
            }
        }
        return count % MOD;
       
    }
};