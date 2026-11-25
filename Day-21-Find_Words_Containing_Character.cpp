/*
 * DATE: 19/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-words-containing-character/
 * PROBLEM STATEMENT: Find Words Containing Character
You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.
Example 1:

Input: words = ["leet","code"], x = "e"
Output: [0,1]
Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.

Constraints:
1 <= words.length <= 50
1 <= words[i].length <= 50
x is a lowercase English letter.
words[i] consists only of lowercase English letters.

 * INSIGHTS GAINED FROM THIS QUESTION:
 1. Learned to use the find() function to search for a character inside a string.
 2. Understood the use of string::npos to check whether a character is not found. 
 3. Practised iterating through a vector of strings using a for loop.
 4. Used push_back() to store the indices of matching words in a vector.
 5. Improved understanding of string searching and vector operations in C++.
 *
 * 
 */

#include <bits/stdc++.h>
using namespace std;
vector<int> findWordsContaining(vector<string>& words, char x) {
    vector <int> temp;
    for (int i=0;i<words.size();i++){
        if(words[i].find(x) != string::npos){
            temp.push_back(i);
        }
    }
    return temp;
}

int main() {
    string words;
    cin >> words;
    vector<string>ans = findwordsContaining(words);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}