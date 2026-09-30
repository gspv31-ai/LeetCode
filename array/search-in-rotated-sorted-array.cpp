class Solution {
public:

    int pivot(vector<int>& v) {
        int s = 0;
        int e = v.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (v[0] <= v[mid]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
        }

        return s;
    }

    int binarySearch(vector<int>& arr, int s, int e, int target) {

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                return mid;
            }
            else if (arr[mid] > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int p = pivot(nums);

        if (target >= nums[p] && target <= nums[nums.size() - 1]) {
            return binarySearch(nums, p, nums.size() - 1, target);
        }
        else {
            return binarySearch(nums, 0, p - 1, target);
        }
    }
};