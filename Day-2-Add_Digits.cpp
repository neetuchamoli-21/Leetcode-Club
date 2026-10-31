/*
 * DATE: 31/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: Add Digits
 * Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * ()
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n>=10){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=digit+rev;
            n=n/10;
            
            
        }
        n=rev;
        
    }
    cout << n;
}