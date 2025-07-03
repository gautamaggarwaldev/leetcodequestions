#include <iostream>
#include <vector>
using namespace std;
class Solution1
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 1;
        right[n - 1] = 1;
        int ans = 0;
        // check for left neighbour child's rating
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
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
            if (ratings[i] > ratings[i + 1])
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
/************************************************************************************************ */
/************************************************************************************************ */
/************************************************************************************************ */
/************************************************************************************************ */
/************************************************************************************************ */
class Solution2
{
public:
    int candy(vector<int> &ratings)
    {
        int sum = 1, i = 1, n = ratings.size();
        while (i < n)
        {
            if (ratings[i] == ratings[i - 1])
            {
                sum += 1;
                i++;
            }
            int peak = 1;
            while (i < n && ratings[i] > ratings[i - 1])
            {
                peak += 1;
                sum += peak;
                i++;
            }
            int down = 1;
            while (i < n && ratings[i] < ratings[i - 1])
            {
                sum += down;
                i++;
                down++;
            }
            if (down > peak)
                sum += down - peak;
        }
        return sum;
    }
};
int main()
{
}