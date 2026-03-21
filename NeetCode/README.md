# NeetCode Solutions (C++)

This folder contains C++ solutions for problems from the NeetCode roadmap.

## Folder Structure

Each problem is organized in its own directory:

- `NN_ProblemName/`
	- `main.cpp` - Solution implementation
	- `README.md` - Problem notes and explanation (optional)

## Solved Problems

| # | Problem | Folder |
|---|---------|--------|
| 1 | Contains Duplicate | [01_ContainsDuplicate](01_ContainsDuplicate) |
| 2 | Valid Anagram | [02_ValidAnagrams](02_ValidAnagrams) |
| 3 | Two Sum | [03_TwoSum](03_TwoSum) |

## Build and Run

Example using GCC (replace folder name as needed):

```bash
cd 02_ValidAnagrams
g++ -std=c++17 -O2 -Wall -Wextra -pedantic main.cpp -o main
./main
```

## Notes

- Prefer clear, interview-friendly implementations.
- Add time/space complexity comments where useful.
- Keep one active implementation when multiple approaches are present in the same source file.

## Adding New NeetCode Problems

1. Create a new folder: `NN_ProblemName`
2. Add `main.cpp`
3. Optionally add a short `README.md` with approach and complexity
4. Update the solved problems table above
