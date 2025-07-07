#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        // variable size sliding window
        int n = nums.size();
        int currSum = 0;
        int minWindow = INT_MAX;
        int i = 0;
        int j = 0;
        while (j < n)
        {
            currSum += nums[j];
            j++;
            while (currSum >= target)
            {
                int currWindow = j - i;
                minWindow = min(minWindow, currWindow);
                currSum -= nums[i];
                i++;
            }
        }
        return minWindow == INT_MAX ? 0 : minWindow;
    }
};
int main()
{
}