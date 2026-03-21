#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
/*
** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
** You may assume that each input would have exactly one solution, and you may not use the same element twice.
** You can return the answer in any order.
*/

// Solution 1: Brute Force
// Time Complexity: O(n^2) - We have two nested loops to check each pair of numbers, which takes O(n^2) time.
// Space Complexity: O(1) - We are not using any additional data structures, so the space complexity is constant.
#if 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
    }
};
#endif


#if 1
// Solution 2: Two Pass Hash Table
// Time Complexity: O(n) - We iterate through the array twice, which takes O(n) time.
// Space Complexity: O(n) - We use a hash table to store the elements we have seen so far, which takes O(n) space.
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (seen.count(complement)) {
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};
#endif

