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

## Solutions

This problem can be solved in multiple ways. The implementation file includes all approaches below.

### 1. Brute Force

Compare every pair of elements using two nested loops.

- Idea: If any `nums[i] == nums[j]` for `i < j`, return `true`.
- Best for: Learning and very small inputs.
- Time: `O(n^2)`
- Space: `O(1)`

### 2. Sorting

Sort the array, then check adjacent elements.

- Idea: After sorting, duplicates become neighbors.
- Best for: Cases where modifying input is acceptable.
- Time: `O(n log n)`
- Space: `O(1)` extra (depends on sort implementation details)

### 3. Ordered Set (`set`)

Insert elements into a balanced BST-based set.

- Idea: If an element is already in the set, a duplicate exists.
- Best for: When ordered uniqueness structure is preferred.
- Time: `O(n log n)`
- Space: `O(n)`

### 4. Unordered Set (`unordered_set`)

Track seen elements in a hash set.

- Idea: Hash lookup lets us detect repeats quickly.
- Best for: Typical interview/production choice for this problem.
- Time: `O(n)` average
- Space: `O(n)`

## Complexity Summary

| Approach | Time | Space |
|---|---|---|
| Brute Force | `O(n^2)` | `O(1)` |
| Sorting | `O(n log n)` | `O(1)` extra |
| `set` | `O(n log n)` | `O(n)` |
| `unordered_set` | `O(n)` average | `O(n)` |

## C++ File

- Solution implementation: [main.cpp](main.cpp)
