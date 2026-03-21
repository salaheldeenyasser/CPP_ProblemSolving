#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;


/*
** Given an array of strings strs, group the anagrams together. You can return the answer in any order.
** An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

// Solution 1: Sorting & Hash Map
// Time Complexity: O(n k log k) - We iterate through each string in the input array, where n is the number of strings and k is the maximum length of a string. For each string, we sort it, which takes O(k log k) time. The overall time complexity is O(n k log k) due to the sorting step for each string.
// Space Complexity: O(n k) - We use a hash map to store the grouped anagrams, where the keys are the sorted strings and the values are vectors of anagrams. In the worst case, if all strings are anagrams of each other, we will store all n strings in the hash map, resulting in O(n k) space complexity.
#if 1
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(const string& s: strs){
            string key = s;
            sort(key.begin(),key.end());
            groups[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& pair : groups){
            result.push_back(pair.second);
        }

        return result;
    }
};
#endif


int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    vector<vector<string>> groupedAnagrams = sol.groupAnagrams(strs);

    for (const auto& group : groupedAnagrams) {
        cout << "[";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
}