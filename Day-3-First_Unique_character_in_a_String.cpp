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
