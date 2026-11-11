/*
 * DATE: 07/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/valid-perfect-square/
 * PROBLEM STATEMENT: Valid Perfect Square

 Given a positive integer num, return true if num is a perfect square or false otherwise.
A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
You must not use any built-in library function, such as sqrt.

 Example 1:

Input: num = 16
Output: true
Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
Example 2:

Input: num = 14
Output: false
Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 

Constraints: 1 <= num <= 231 - 1
 * ----------------------------------------
 * INSIGHTS GAINED FROM THIS QUESTION:
- Learned to check perfect squares using loops and multiplication without `sqrt()`.
- Understood integer overflow and the use of `long long`.
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
 bool isPerfectSquare(int num) {
    for (long long  i=1;i<=num;i++){
        if (i*i==num){

            return true;
        }
        
 
    }
    return false;
}

int main() {
    int num;
    cin >> num;
    isPerfectSquare(num);
    if (isPerfectSquare(num)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    

    return 0;
}