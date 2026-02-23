# Valid Parentheses (LeetCode 20)

Problem link: https://leetcode.com/problems/valid-parentheses/

## Problem
Given a string `s` containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.

Examples
- Input: `s = "()"`
	Output: `true`
- Input: `s = "()[]{}"`
	Output: `true`
- Input: `s = "(]"`
	Output: `false`

Constraints
- `1 <= s.length <= 10^4`
- `s` consists only of the characters '(', ')', '{', '}', '[' and ']'.

## Intuition / Approach
Use a stack to track opening brackets. When you see an opening bracket, push it onto the stack. When you see a closing bracket, check the top of the stack:
- If the stack is empty or the top doesn't match the corresponding opening bracket, the string is invalid.
- Otherwise pop the top and continue.

At the end, the string is valid only if the stack is empty.

Typical C++ solution (concise):

```cpp
#include <stack>
#include <string>
#include <unordered_map>

bool isValid(const std::string &s) {
		std::stack<char> st;
		std::unordered_map<char,char> pairs{{')','('},{']','['},{'}','{'}};
		for (char c : s) {
				if (c=='(' || c=='[' || c=='{') st.push(c);
				else {
						if (st.empty() || st.top() != pairs[c]) return false;
						st.pop();
				}
		}
		return st.empty();
}
```

You can find a full example implementation in [main.cpp](20_ValidParentheses/main.cpp).

## Complexity
- Time: O(n), where n is the length of the string — each character is pushed/popped at most once.
- Space: O(n) in the worst case for the stack (all opening brackets).

## How to run
Compile and run the C++ example in this folder:

```bash
g++ -std=c++17 -O2 20_ValidParentheses/main.cpp -o valid_parentheses
./valid_parentheses
```

## Notes
- This problem is a straightforward stack application and a common interview question.
- Edge cases: starting with a closing bracket, unmatched types, and leftover openings.

