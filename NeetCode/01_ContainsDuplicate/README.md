# Contains Duplicate

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hashing

## Problem Statement

Given an integer array `nums`, return `true` if any value appears more than once in the array, otherwise return `false`.

## Examples

### Example 1

- Input: `nums = [1, 2, 3, 3]`
- Output: `true`

### Example 2

- Input: `nums = [1, 2, 3, 4]`
- Output: `false`

## Approach

Use a set to track values seen so far:

1. Iterate through the array.
2. If the current value is already in the set, return `true`.
3. Otherwise, insert it into the set.
4. If the loop ends, return `false`.

## Complexity

- Time: `O(n)` on average
- Space: `O(n)`

## C++ File

- Solution implementation: [main.cpp](main.cpp)
