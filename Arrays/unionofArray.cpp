/*Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
Output: [1, 2, 3, 4, 5, 7]
Explanation:
The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2*/
  
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            // Skip duplicates in nums1
            while (i > 0 && i < nums1.size() && nums1[i] == nums1[i-1]) i++;

            // Skip duplicates in nums2
            while (j > 0 && j < nums2.size() && nums2[j] == nums2[j-1]) j++;

            if (i >= nums1.size() || j >= nums2.size()) break;

            if (nums1[i] < nums2[j]) {
                result.push_back(nums1[i++]);
            } else if (nums1[i] > nums2[j]) {
                result.push_back(nums2[j++]);
            } else {
                result.push_back(nums1[i]);
                i++; j++;
            }
        }

        // Remaining elements of nums1
        while (i < nums1.size()) {
            if (i == 0 || nums1[i] != nums1[i-1])
                result.push_back(nums1[i]);
            i++;
        }

        // Remaining elements of nums2
        while (j < nums2.size()) {
            if (j == 0 || nums2[j] != nums2[j-1])
                result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};
