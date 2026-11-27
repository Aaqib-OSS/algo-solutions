// Problem: Search in Rotated Sorted Array
// Source: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Topic: Binary Search, Arrays
// Status: ✅ Done

#include <iostream>
#include <vector>
using namespace std;
int search(const vector<int>& nums, int target) {
    int low = 0;
    int high = static_cast<int>(nums.size()) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}
