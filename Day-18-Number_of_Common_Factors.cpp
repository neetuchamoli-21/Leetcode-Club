/*
 * DATE: 16/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/number-of-common-factors/
 * PROBLEM STATEMENT: Number of Common Factors
 * Given two positive integers a and b, return the number of common factors of a and b.
 * An integer x is a common factor of a and b if x divides both a and b.
 Example 1:
Input: a = 12, b = 6
Output: 4
Explanation: The common factors of 12 and 6 are 1, 2, 3, 6
Constraints: 1 <= a, b <= 1000
 */

#include <bits/stdc++.h>
using namespace std;
int commonFactors(int a, int b) {
    int count=0;
    for (int i=1; i <= min(a,b);i++){
        if(a%i==0 && b%i == 0){
            count ++;
        }
    }
    return count;
        
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << commonFactors(a,b);
   

    return 0;
}