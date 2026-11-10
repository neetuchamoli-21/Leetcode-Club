/*
 * DATE: 05/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/perfect-number/
 * PROBLEM STATEMENT: Perfect Number
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.

Example 1:

Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.
Example 2:

Input: num = 7
Output: false
 

Constraints:1 <= num <= 108

 */

#include <iostream>
using namespace std;
bool checkPerfectNumber(int num) {
        int count=0;
        for (int i=1;i<num;i++){
            if (num%i==0){
                count=count+i;

            }
        }
        if (count == num){
            cout << "true";
            return true;
        }
        else{
            cout << "false";
            return false;
        }
       
    }

int main() {
    int num;
    cin >> num;
    checkPerfectNumber(num);

    return 0;
}