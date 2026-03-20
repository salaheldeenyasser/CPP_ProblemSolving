#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Solution 1: Brute Force
// Time Complexity: O(n^2) - We have two nested loops to compare each element with every other element.
// Space Complexity: O(1) - We are not using any additional data structures, so the space complexity is constant.
#if 1
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0 ; i < nums.size() ; i++){
            for (int j = i + 1 ; j < nums.size() ; j++){
                if ( nums[i] == nums[j] ){
                    return true;
                }
                
            }
        }
        return false;
    }
};

#endif

// Solution 2: Sorting
// Time Complexity: O(n log n) - Sorting the array takes O(n log n), and then we have a single pass to check for duplicates which takes O(n).
// Space Complexity: O(1) - We are sorting the array in place, so we are not using any additional data structures. However, if the sorting algorithm used is not in-place, it may require O(n) extra space.
#if 1
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for (int i = 0 ; i <nums.size() ; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
#endif




int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    cout << s.hasDuplicate(nums) << endl; // Output: true

    vector<int> nums2 = {1, 2, 3, 4};
    cout << s.hasDuplicate(nums2) << endl; // Output: false

    return 0;
}