# CPP Problem Solving

This repository contains C++ solutions for coding interview and competitive programming problems from different platforms.

## Overview

- Platform-based organization: LeetCode, HackerRank, and NeetCode
- One folder per problem (for most entries)
- Focus on clean, readable C++ solutions

## Repository Structure

```text
CPP_ProblemSolving/
|-- LeetCode/
|   |-- 1_TwoSum/
|   |-- 11_ContainerWithMostWater/
|   |-- 20_ValidParentheses/
|   |-- 88_MergeSortedArray/
|   |-- 151_ReverseWordsInAString/
|   |-- 191_Numberof1Bits/
|   |-- 242_ValidAnagrams/
|   `-- README.md
|-- HackerRank/
|   |-- 01_.cpp
|   `-- README.md
|-- NeetCode/
|   |-- 01_ContainsDuplicate/
|   |-- 02_ValidAnagrams/
|   |-- 03_TwoSum/
|   `-- README.md
`-- README.md
```

## Solved Problems

### LeetCode

| # | Problem | Folder |
|---|---------|--------|
| 1 | Two Sum | [LeetCode/1_TwoSum](LeetCode/1_TwoSum) |
| 11 | Container With Most Water | [LeetCode/11_ContainerWithMostWater](LeetCode/11_ContainerWithMostWater) |
| 20 | Valid Parentheses | [LeetCode/20_ValidParentheses](LeetCode/20_ValidParentheses) |
| 151 | Reverse Words in a String | [LeetCode/151_ReverseWordsInAString](LeetCode/151_ReverseWordsInAString) |
| 191 | Number of 1 Bits | [LeetCode/191_Numberof1Bits](LeetCode/191_Numberof1Bits) |
| 242 | Valid Anagram | [LeetCode/242_ValidAnagrams](LeetCode/242_ValidAnagrams) |

### NeetCode

| # | Problem | Folder |
|---|---------|--------|
| 1 | Contains Duplicate | [NeetCode/01_ContainsDuplicate](NeetCode/01_ContainsDuplicate) |
| 2 | Valid Anagram | [NeetCode/02_ValidAnagrams](NeetCode/02_ValidAnagrams) |
| 3 | Two Sum | [NeetCode/03_TwoSum](NeetCode/03_TwoSum) |

### HackerRank

Current files are under [HackerRank](HackerRank). This section can be expanded as folder-based solutions are added.

## How to Compile and Run

Use any modern C++ compiler (GCC/Clang/MSVC). Example with GCC:

```bash
cd LeetCode/1_TwoSum
g++ -std=c++17 -O2 -Wall -Wextra -pedantic main.cpp -o main
./main
```

## Recommended Naming Convention

- Problem folder: `ProblemNumber_ProblemName`
- Main source file: `main.cpp`
- Optional explanation file: `README.md`

## Adding a New Solution

1. Create a new folder inside the correct platform directory.
2. Add `main.cpp` with your solution.
3. Add a short `README.md` for approach and complexity (optional but recommended).
4. Update this root README problem list.

## Notes

- This project is intended for learning and interview preparation.
- Problem statements belong to their respective platforms.