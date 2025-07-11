#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else if (tolower(s[i]) != tolower(s[j]))
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
int main()
{
}