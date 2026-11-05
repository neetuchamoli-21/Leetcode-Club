/*
 * DATE: 04/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-integer/
 * PROBLEM STATEMENT: Reverse Integer
 *Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

 
 * INSIGHTS GAINED FROM THIS QUESTION:
 Insights Gained:

- Learned to reverse an integer using `% 10` and `/ 10`.
- Understood how to handle positive and negative numbers.
- Learned to check integer overflow using `INT_MAX` and `INT_MIN`.
- Understood how to build a reversed number digit by digit.
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int num=x;
        int rev=0;
        while(x!=0){
            num = x%10;
            if(rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;
            rev=rev*10 + num;
            x=x/10;
        }
        return rev;
        
    }
};

int main() {
    int x;
    cin >> x;
    Solution s;
    cout << s.reverse(x) << endl;
    return 0;
}