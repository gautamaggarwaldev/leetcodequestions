#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while (i < j)
        {
            int w = j - i;
            int h = min(height[i], height[j]);
            int area = h * w;
            ans = max(ans, area);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};
int main()
{
}