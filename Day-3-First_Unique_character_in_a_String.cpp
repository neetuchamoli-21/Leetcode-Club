/*
 * DATE: 01/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/first-unique-character-in-a-string?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: First Unique Character in a String
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:

Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1

Constraints:
1 <= s.length <= 105
s consists of only lowercase English letters.

 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *
 * ----------------------------------------
1. Learned character frequency counting.
2. Understood the use of freq[26] array.
3. Learned character-to-index conversion using s[i] - 'a'.
4. Understood nested loops and frequency arrays.
5. Learned to optimize time complexity from O(n²) to O(n).
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

int main() {

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[30]={0};
        int n = s.length();
        for (int i=0;i<n;i++){
            freq[s[i]-'a']++;

        }
        for(int i = 0; i <n; i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
        
       
    }   
     
    
};

int main() {
	string s;
    cin >> s;
    Solution obj;
    cout << obj.firstUniqChar(s);
}
