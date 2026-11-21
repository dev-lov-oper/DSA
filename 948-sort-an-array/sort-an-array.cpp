class Solution {
public:
    vector<int> sortArray(vector<int>& nums) { 
        int left = 0;
        int right = nums.size() - 1;

        mergesort(nums, left, right);
        return nums;
    }

private:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> ans;
        int i = left;
        int j = mid + 1;

        while (i <= mid && j <= right) {
            if (nums[i] >= nums[j]) {
                ans.push_back(nums[j]);
                j++;
            } else {
                ans.push_back(nums[i]);
                i++;
            }
        }

        while (i <= mid) {
            ans.push_back(nums[i]);
            i++;
        }

        while (j <= right) {
            ans.push_back(nums[j]);
            j++;
        }

        // Copy back to original array
        for (int k = left; k <= right; k++) {
            nums[k] = ans[k - left];
        }
    }

    void mergesort(vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int mid = (left + right) / 2;

        mergesort(nums, left, mid);
        mergesort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
};