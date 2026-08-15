class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        int i = -1;
        int j = -1;
        while (s <= e) {
            if (nums[mid] == target) {
               i=mid;
               e=mid-1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
         s = 0;
         e = nums.size() - 1;
        mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == target) {
               j=mid;
               s=mid+1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return {i, j};
    }
};