/*
 * DATE: 14/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/smallest-even-multiple/
 * PROBLEM STATEMENT: Smallest Even Multiple
 *Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
  Example 1:
  Input: n = 5
  Output: 10
  Explanation: The smallest multiple of both 5 and 2 is 10.
 * ----------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;
int smallestEvenMultiple(int n) {
    if(n % 2 == 0) {
        return n;
    }
    else {
        return n * 2;
    }
}

int main() {
    int n;
    cin >> n;
    cout << smallestEvenMultiple(n) << endl;
    return 0;
}