class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);  // Create an auxiliary array
        mergeSort(nums, temp, 0, n-1);
        return nums;
    }

private:
    void mergeSort(vector<int>& nums, vector<int>& temp, int low, int high) {
        if (low >= high)
            return;
        int mid = low + (high - low) / 2;
        mergeSort(nums, temp, low, mid);
        mergeSort(nums, temp, mid + 1, high);
        merge(nums, temp, low, mid, high);
    }

    void merge(vector<int>& nums, vector<int>& temp, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        int index = low;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp[index++] = nums[left++];
            } else {
                temp[index++] = nums[right++];
            }
        }
        while (left <= mid) {
            temp[index++] = nums[left++];
        }
        while (right <= high) {
            temp[index++] = nums[right++];
        }
        for (int i = low; i <= high; ++i) {
            nums[i] = temp[i];
        }
    }
};