# include <iostream>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows > s.length()) return s;
        string ans = "";
        for(int i=0;i<numRows;i++) {
            int idx = i;
            int down = 2 * (numRows - 1 - i);
            int up = 2 * i;
            bool goDown = true;
            while(idx < s.length()) {
                ans += s[idx];
                if(i==0) idx += down;
                else if(i == numRows-1) idx += up;
                else {
                    if(goDown) idx += down;
                    else idx += up;
                    goDown = !goDown;
                }
            }
        }
        return ans;
    }
};
int main() {
   
}