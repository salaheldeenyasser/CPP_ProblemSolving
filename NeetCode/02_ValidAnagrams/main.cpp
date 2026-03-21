#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

/*
** Given two strings s and t, return true if t is an anagram of s, and false otherwise.
** An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

// Solution 1: Sorting (Brute Force)
// Time Complexity: O(n log n) - Sorting both strings takes O(n log n) time, where n is the length of the strings. The comparison of the sorted strings takes O(n) time.
// Space Complexity: O(1) - We are sorting the strings in place, so we are not using any additional data structures. However, if the sorting algorithm used is not in-place, it may require O(n) extra space.
#if 1
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() == t.length())
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
        return false;
    }
};
#endif

// Solution 2: Hash Map
// Time Complexity: O(n) - We iterate through both strings once to populate the hash map, and then we iterate through the hash map to check if all counts are zero, which takes O(n) time.
// Space Complexity: O(1) - The hash map will contain at most 26 entries (assuming only lowercase letters), so the space complexity is constant.
#if 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) return false;
        unordered_map<char, int> counts;

        for(int i = 0; i<s.length(); i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }

        for(auto const& [key,val] : counts){
            if(val != 0) return false;
        }
        
        return true;
    }
};
#endif

int main()
{
    string s = "anagram";
    string t = "nagaram";

    Solution sol;
    bool result = sol.isAnagram(s, t);

    cout << (result ? "true" : "false") << endl;

    return 0;
}