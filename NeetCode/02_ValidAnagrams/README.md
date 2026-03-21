# Valid Anagram

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hashing, Sorting, String

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word or phrase formed by rearranging the letters of another word, using all original letters exactly once.

## Examples

### Example 1

- Input: `s = "anagram", t = "nagaram"`
- Output: `true`

### Example 2

- Input: `s = "rat", t = "car"`
- Output: `false`

## Constraints

- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` consist of lowercase English letters.

## Solutions

This problem can be solved in multiple ways. The implementation file includes the approaches below.

### 1. Sorting

Sort both strings and compare them.

- Idea: Anagrams have the same characters in the same frequencies, so sorted forms must be identical.
- Time: `O(n log n)`
- Space: `O(1)` extra (in-place sort assumptions may vary by implementation)

### 2. Hash Map Counting

Count characters from both strings in one pass.

- Idea: Increment count for characters in `s`, decrement for characters in `t`, then verify all counts are zero.
- Time: `O(n)`
- Space: `O(1)` for lowercase English letters (bounded alphabet)

## Complexity Summary

| Approach | Time | Space |
|---|---|---|
| Sorting | `O(n log n)` | `O(1)` extra |
| Hash Map Counting | `O(n)` | `O(1)` (bounded alphabet) |

## Follow-up

If inputs contain Unicode characters, replace fixed-size counting with a map keyed by Unicode code points (for example, `unordered_map<char32_t, int>` after proper UTF decoding).

## C++ File

- Solution implementation: [main.cpp](main.cpp)
