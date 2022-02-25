/*
 * @lc app=leetcode id=2006 lang=cpp
 *
 * [2006] Count Number of Pairs With Absolute Difference K
 *
 * https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/
 *
 * algorithms
 * Easy (83.72%)
 * Likes:    486
 * Dislikes: 11
 * Total Accepted:    38.3K
 * Total Submissions: 46K
 * Testcase Example:  '[1,2,2,1]\n1'
 *
 * Given an integer array nums and an integer k, return the number of pairs (i,
 * j) where i < j such that |nums[i] - nums[j]| == k.
 *
 * The value of |x| is defined as:
 *
 *
 * x if x >= 0.
 * -x if x < 0.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,2,1], k = 1
 * Output: 4
 * Explanation: The pairs with an absolute difference of 1 are:
 * - [1,2,2,1]
 * - [1,2,2,1]
 * - [1,2,2,1]
 * - [1,2,2,1]
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1,3], k = 3
 * Output: 0
 * Explanation: There are no pairs with an absolute difference of 3.
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [3,2,1,5,4], k = 2
 * Output: 3
 * Explanation: The pairs with an absolute difference of 2 are:
 * - [3,2,1,5,4]
 * - [3,2,1,5,4]
 * - [3,2,1,5,4]
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 200
 * 1 <= nums[i] <= 100
 * 1 <= k <= 99
 *
 *
 */

// @lc code=start
class Solution {
 public:
  int countKDifference(vector<int>& nums, int k) {
    auto cnt = 0;
    for (auto left = nums.cbegin(); left < nums.cend(); ++left) {
      for (auto right = left + 1; right < nums.cend(); ++right) {
        if (abs(*left - *right) == k) {
          ++cnt;
        }
      }
    }
    return cnt;
  }
};
// @lc code=end
