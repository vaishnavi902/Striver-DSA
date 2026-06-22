/*A peak element is an element that is strictly greater than its neighbors.Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.

 Example 1:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Example 2:
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If array has only one element
            if (n == 1)
                return 0;

            // First element
            if (mid == 0) {
                if (nums[0] > nums[1])
                    return 0;
                else
                    low = mid + 1;
            }

            // Last element
            else if (mid == n - 1) {
                if (nums[n - 1] > nums[n - 2])
                    return n - 1;
                else
                    high = mid - 1;
            }

            // Peak found
            else if (nums[mid] > nums[mid - 1] &&
                     nums[mid] > nums[mid + 1]) {
                return mid;
            }

            // Move right
            else if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            }

            // Move left
            else {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    int ans = obj.findPeakElement(nums);

    cout << "Peak Element Index = " << ans << endl;
    cout << "Peak Element Value = " << nums[ans] << endl;
    return 0;
}
