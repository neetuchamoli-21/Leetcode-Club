/*
 * DATE: 10/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/count-primes/
 * PROBLEM STATEMENT: Count Primes
Given an integer n, return the number of prime numbers that are strictly less than n.
Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Constraints: 0 <= n <= 5 * 106

 * INSIGHTS GAINED FROM THIS QUESTION:
 * Learned the Sieve of Eratosthenes algorithm to find prime numbers efficiently.
 * Understood how to use a boolean vector to mark prime and non-prime numbers.
 * Learned to eliminate multiples of prime numbers starting from \(i \times i\).
 */

#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        if (n<=2) return 0;
        vector<bool> prime(n,true);
        prime[0] = prime[1] = false;

        for (int i=2;i*i<n;i++){
            if (prime[i]){
                for (int j=i*i;j<n;j+=i){
                    prime[j]=false;
                }
            }
        }
        int count = 0;

        for (int i=2;i<n;i++){
            if (prime[i]){
                count++;
            }
        }
        return count;
        
}

int main() {
    int n;
    cin >> n;
    cout << countPrimes(n);
    return 0;
}