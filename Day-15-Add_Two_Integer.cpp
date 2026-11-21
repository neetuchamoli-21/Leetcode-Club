/*
 * DATE: 13/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-two-integers/
 * PROBLEM STATEMENT: 
 * Given two integers num1 and num2, return the sum of the two integers.
 Example 1:

Input: num1 = 12, num2 = 5
Output: 17
Explanation: num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned.
 
Constraints: -100 <= num1, num2 <= 100
 
* ----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;
int sum(int num1, int num2) {
    int sum;
    sum = num1+num2; 
    return sum;  
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2) << endl;
    return 0;
}