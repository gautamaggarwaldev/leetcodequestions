#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] < mp[s[i + 1]])
            {
                ans -= mp[s[i]];
            }
            else {
                ans += mp[s[i]];
            }     
        }
        return ans;
    }
};
int main()
{
}