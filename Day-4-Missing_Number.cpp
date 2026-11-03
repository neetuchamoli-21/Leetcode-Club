/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: Missing Number
 Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Constraints:
n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return total - sum;
    }
};


int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.missingNumber(nums);
    cout << "The missing number is: " << result << endl;

    return 0;
}