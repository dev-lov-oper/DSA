class Solution {
public:
   void merge(vector<int>&nums,int low,int mid,int high,int& rpcount){
    int j=mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high &&nums[i]>2*(long long)nums[j]){
            j++;
        }
        rpcount+=j-(mid+1);
    }
    // merge
    int size=high-low;
    vector<int>temp;

    int left=low;
    int right=mid+1;
    while(left<=mid &&right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    

    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
            right++;
    }

    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
   

   }

    void mergesort(vector<int>&nums,int low,int high,int& rpcount){
        if(low>=high){
            return;
        }
        int mid=(low+high)>>1;
        mergesort(nums,low,mid,rpcount);
        mergesort(nums,mid+1,high,rpcount);
        merge(nums,low,mid,high,rpcount);


    }

    int reversePairs(vector<int>& nums) {
        int rpcount=0;
         mergesort(nums,0,nums.size()-1,rpcount);
        return rpcount;
    }
};