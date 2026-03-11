# Number of 1 Bits (Hamming Weight) (LeetCode 191)

Given a positive integer `n`, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

## Examples

Example 1

Input

```
n = 11
```

Output

```
3
```

Explanation: `11` in binary is `1011`, which contains three `1` bits.

Example 2

Input

```
n = 128
```

Output

```
1
```

Explanation: `128` in binary is `10000000`, which contains one `1` bit.

Example 3

Input

```
n = 2147483645
```

Output

```
30
```

Explanation: `2147483645` in binary is `1111111111111111111111111111101`, which contains thirty `1` bits.

## Constraints

- `1 <= n <= 2^31 - 1`

## Approach

- Use bit manipulation to count `1` bits efficiently:
	- Repeatedly clear the lowest set bit with `n &= (n - 1)` and increment a counter.
	- This runs in O(k) where `k` is the number of set bits.

Time complexity: O(number of set bits). Space complexity: O(1).

## Files

- Solution implementation: [main.cpp](main.cpp)
