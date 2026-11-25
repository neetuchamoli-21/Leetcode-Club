/*
 * DATE: 20/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/count-dominant-elements/
 * PROBLEM STATEMENT: Count Dominant Elements
 
You are given an integer array nums.
An element in nums is called dominant if it is greater than or equal to the average of its immediate neighbors.
The immediate neighbors of nums[i] are nums[i - 1] and nums[i + 1], when those indices exist.
A single element with no neighbors is considered dominant.
Return the number of dominant elements in nums.

Example 1:
Input: nums = [1,10,2]
Output: 1
Explanation:
For nums[0] = 1, its only neighbor is 10. Since 1 < 10, it is not dominant.
For nums[1] = 10, its neighbors are 1 and 2. Their average is (1 + 2) / 2 = 1.5. Since 10 > 1.5, it is dominant.
For nums[2] = 2, its only neighbor is 10. Since 2 < 10, it is not dominant.
Therefore, the answer is 1.

Constraints:
1 <= nums.length <= 100
1 <= nums[i] <= 100

 */


#include <bits/stdc++.h>
using namespace std;

int countDominantElements(vector<int>& nums) {
    int count = 0;
    if(nums.size() == 1) return 1;
    for(int i = 0; i < nums.size(); i++) {

        if(i == 0) {
            if(nums[i] >= nums[i + 1]) {
                count++;
            }
        }

        else if(i == nums.size() - 1) {
            if(nums[i] >= nums[i - 1]) {
                count++;
            }
        }

        else {
            if(nums[i] >= (nums[i - 1] + nums[i + 1]) / 2.0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int ans = countDominantElements(nums);

    cout << "Count: " << ans;

    return 0;
}
