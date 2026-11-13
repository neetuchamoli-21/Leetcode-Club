/*
 * DATE: 13/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/valid-digit-number/
 * PROBLEM STATEMENT: Valid Digit Number
You are given an integer n and a digit x.
A number is considered valid if:
It contains at least one occurrence of digit x, and
It does not start with digit x.
Return true if n is valid, otherwise return false.
Example 1:
Input: n = 101, x = 0
Output: true
Explanation:
The number contains digit 0 at index 1. It does not start with 0, so it satisfies both conditions. Thus, the answer is true​​​​​​​.
Constraints:0 <= n <= 105​​​​​​​,
0 <= x <= 9
 
 * INSIGHTS GAINED FROM THIS QUESTION:
Learned digit validation using loops and conditions.
Improved logical thinking and C++ problem-solving skills.
 */

#include <iostream>
using namespace std;
bool validDigit(int n, int x) {
    int digit;
    int first = n;
    while (first >= 10) {
        first = first / 10;
    }
    if (first == x) return false;
    while (n>0){
        digit = n%10;
        if (digit == x){
            return true;
        }
        n=n/10;
           


    }
    return false;
       
        
}

int main() {
    int n, x;
    cin >> n >> x;
    if (validDigit(n, x)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    

    return 0;
}