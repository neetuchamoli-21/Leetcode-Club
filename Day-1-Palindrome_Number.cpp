/*
   * DATE: 30/10/2026
   *
   * PROBLEM LINK:https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&envId=math
   * PROBLEM STATEMENT: Palindrome Number
   * Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
   *
   * ----------------------------------------
   * Write statement notes here
   * ----------------------------------------
   *
   * INSIGHTS GAINED FROM THIS QUESTION:
   * (Notes, ideas, tricks for quick revision)
   *
   * ----------------------------------------
   * Write insights here
   * ----------------------------------------
   */
#include <bits/stdc++.h>
using namespace std;
int main (){ 
  int x;
  cin >> x;
  if (x<0){
    cout << "false";
    return 0;
  }
  int temp=x;
  long long rev=0;
  while(x>0){
    int rem= x % 10;
    rev=rev*10+rem;
    x = x /10 ;
  }
  if(rev==temp){
    cout << "true" ;
  }
  else{
    cout << "false";
  }
}

        
    
};
        
