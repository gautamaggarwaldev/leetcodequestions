# include <iostream>
# include <string>
# include <algorithm>
# include <cctype>
using namespace std;
class Solution {
public:
    void trim(string& s) {
        // Remove leading spaces
        s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));

        // Remove trailing spaces
        s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), s.end());
    }

    int lengthOfLastWord(string s) {
        trim(s);
        int count = 0;
        int n = s.length();
        int i = n-1;
        while(i>=0 && s[i]!=' ') {
            i--;
            count++;
        }
        return count;

    }
};
int main() {
   
}