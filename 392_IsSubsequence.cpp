#include <iostream>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.length();
        int m = t.length();
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        return n == i;
    }
};
int main()
{
}