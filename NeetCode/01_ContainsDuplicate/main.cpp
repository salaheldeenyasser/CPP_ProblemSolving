#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Solution 1: Brute Force
// Time Complexity: O(n^2) - We have two nested loops to compare each element with every other element.
// Space Complexity: O(1) - We are not using any additional data structures, so
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




int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    cout << s.hasDuplicate(nums) << endl; // Output: true

    vector<int> nums2 = {1, 2, 3, 4};
    cout << s.hasDuplicate(nums2) << endl; // Output: false

    return 0;
}