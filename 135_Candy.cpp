#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int candy(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 1;
        right[n - 1] = 1;
        int ans = 0;
        // check for left neighbour child's rating
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                left[i] = left[i - 1] + 1;
            }
            else
            {
                left[i] = 1;
            }
        }
        // check for right neighbour child's rating
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                right[i] = right[i + 1] + 1;
            }
            else
            {
                right[i] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            ans += max(left[i], right[i]);
        }
        return ans;
    }
};
int main()
{
}