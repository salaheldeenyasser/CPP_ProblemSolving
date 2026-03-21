#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
** You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
** Merge nums1 and nums2 into a single array sorted in non-decreasing order.
** The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

// Solution 1: Brute Force
// Time Complexity: O((m+n) log (m+n)) - We combine the two arrays and then sort the resulting array, which takes O((m+n) log (m+n)) time.
// Space Complexity: O(m+n) - We create a new array to hold the combined elements of nums1 and nums2, which takes O(m+n) space.
#if 1
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i = 0; i < n ; i++){
            nums1[m+i] = nums2[i];
        }
        #if 1
        std::sort(nums1.begin(), nums1.end());
        #endif
        #if 0
        for(int i = 0; i < n+m ; i++){
            for(int j = 0 ; j < n+m-1 ; j++){
                if(nums1[j] > nums1[j+1]){
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
        #endif
    }
};
#endif

// Solution 2: Two Pointers
// Time Complexity: O(m+n) - We traverse both arrays once, which takes O(m+n) time.
// Space Complexity: O(1) - We are merging the arrays in place, so we are not using any additional data structures, resulting in O(1) space complexity.
#if 1

#endif

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;
    
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}