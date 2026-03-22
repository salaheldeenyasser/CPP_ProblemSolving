#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
/*
** Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.   
** The frequency of an element is the number of times it appears in the array.  
*/

// Solution 1: Hash Map & Sorting
// Time Complexity: O(n log n) - We iterate through the input array to populate the hash map, which takes O(n) time. Then we create a vector of pairs from the hash map, which takes O(n) time. Sorting the vector of pairs takes O(n log n) time. Finally, we iterate through the sorted vector to extract the top k elements, which takes O(k) time. Overall, the dominant term is O(n log n) due to the sorting step.
// Space Complexity: O(n) - We use a hash map to store the frequency of each element, which can contain at most n entries in the worst case (when all elements are unique). Additionally, we create a vector of pairs to store the frequency and corresponding elements, which also takes O(n) space. The result vector that stores the top k elements takes O(k) space, but since k is less than or equal to n, it does not affect the overall space complexity, which remains O(n).
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;

        for(const int& num : nums){
            freq[num]++;
        }

        vector<pair<int,int>> counts;
        for(auto& pair : freq ){
            counts.push_back({pair.second, pair.first});
        }

        sort(counts.rbegin(), counts.rend());
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(counts[i].second);
        }
        return result;
    }
};

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    Solution sol;
    vector<int> topK = sol.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (const int& num : topK) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {1};
    k = 1;
    topK = sol.topKFrequent(nums2, k);
    cout << "Top " << k << " frequent elements: ";
    for (const int& num : topK) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}