// LEETCODE 912 SORT AN ARRAY
/* Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessarily unique.
 
Constraints:

1 <= nums.length <= 5 * 104
-5 * 104 <= nums[i] <= 5 * 104
*/
class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp;  // temporary vector

        int i = left;      // pointer for left half
        int j = mid + 1;   // pointer for right half

        // Merge both halves into temp
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        // Copy remaining elements from left half
        while (i <= mid) {
            temp.push_back(nums[i++]);
        }

        // Copy remaining elements from right half
        while (j <= right) {
            temp.push_back(nums[j++]);
        }

        // Copy sorted temp back into nums
        for (int k = left; k <= right; k++) {
            nums[k] = temp[k - left];
        }
    }

    void mergesort(vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int mid = (left + right) / 2;
        mergesort(nums, left, mid);
        mergesort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};
