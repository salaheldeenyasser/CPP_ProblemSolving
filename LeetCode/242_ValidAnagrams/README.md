# Valid Anagram (LeetCode 242)

Problem link: https://leetcode.com/problems/valid-anagram/

## Problem
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word formed by rearranging the letters of another word, using all characters exactly once.

Examples
- Input: `s = "anagram", t = "nagaram"`
	Output: `true`
- Input: `s = "rat", t = "car"`
	Output: `false`

Constraints
- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` consist of lowercase English letters.

## Intuition / Approach
If two strings are anagrams, they must:
- Have the same length.
- Have exactly the same frequency for each character.

Because input contains only lowercase English letters, we can use a fixed-size array of length 26:
- Increment count for each char in `s`.
- Decrement count for each char in `t`.
- If all counts are zero at the end, the strings are anagrams.

Typical C++ solution (concise):

```cpp
#include <array>
#include <string>

bool isAnagram(const std::string& s, const std::string& t) {
	if (s.size() != t.size()) return false;

	std::array<int, 26> freq{};
	for (char c : s) freq[c - 'a']++;
	for (char c : t) freq[c - 'a']--;

	for (int x : freq) {
		if (x != 0) return false;
	}
	return true;
}
```

You can find a full example implementation in `main.cpp`.

## Complexity
- Time: `O(n)`, where `n` is the string length.
- Space: `O(1)` extra space (fixed 26-size array).

## Follow-up (Unicode)
If input may contain Unicode characters, a fixed 26-size array is no longer enough.

A common adaptation:
- Use a hash map keyed by character/code point (for example `unordered_map<char32_t, int>`).
- Decode text into Unicode code points first (important for UTF-8 input).
- Then apply the same counting idea.

That approach keeps time near `O(n)` on average, with space `O(k)` where `k` is the number of distinct characters.
