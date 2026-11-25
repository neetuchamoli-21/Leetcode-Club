/*
 * DATE: 17/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/two-sum/https://leetcode.com/problems/two-sum/
 * PROBLEM STATEMENT: Two Sum
You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

Constraints:
* 2 <= nums.length <= 104
* -109 <= nums[i] <= 109
* -109 <= target <= 109
* Only one valid answer exists.
 */

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int targetkur) {
    int n = nums.size();
    vector <int> v;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (nums[i]+nums[j] == targetkur){
                v.push_back(i);
                v.push_back(j);

            }
        }
    }
    return v;
        
}

int main() {
    int n;
    int targetkur;
    cin >> targetkur;
    cout << "Enter the number of elements:";
    cin >> n;
    
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;

        nums.push_back(x);
    }
    vector<int> ans = twoSum(nums, targetkur);
    cout << "Indices: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }


    return 0;
}