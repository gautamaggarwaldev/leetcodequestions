#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        if (n == 0 || n < 3)
            return {};
        for (int i = 0; i < n - 2; i++)
        {
            // skip the duplicate triplet
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    vector<int> arr = {nums[i], nums[j], nums[k]};
                    v.push_back(arr);
                    // skip the duplicate triplet
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;
                        
                    j++;
                    k--;
                }
                else if (sum < 0)
                    j++;
                else
                    k--;
            }
        }
        return v;
    }
};
int main()
{
}