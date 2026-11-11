/*
 * DATE: 06/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/single-number/
 * PROBLEM STATEMENT: Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Constraints:1 <= nums.length <= 3 * 104,
-3 * 104 <= nums[i] <= 3 * 104,
Each element in the array appears twice except for one element which appears only once.
 ---------------------
 * INSIGHTS GAINED FROM THIS QUESTION:
### Insights Gained
- Learned how XOR (`^`) works.
- Learned how to use `push_back()` to add elements dynamically to a vector.
 * ----------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int alone = 0;
    for (int i=0;i<nums.size();i++){
        alone = alone ^ nums[i];
            
    }
    cout << alone;
}


int main() {
    vector<int> nums;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        nums.push_back(element);
    }
   

    return 0;
}