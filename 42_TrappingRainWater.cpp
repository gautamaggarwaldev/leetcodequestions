#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &arr)
    {
        int n = arr.size();

        // Step 1 find Prefix Sum Array
        vector<int> ps(n);
        ps[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            ps[i] = max(arr[i], ps[i - 1]);
        }

        // Step 2 find Suffix Sum Array
        vector<int> ss(n);
        ss[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            ss[i] = max(arr[i], ss[i + 1]);
        }

        /* Step 3 first check the leftMax and rightMax of each i and then
        check that i should be less then both of them and find min from LeftnRight Mx
        subract from the arr[i]
        */
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int leftMax = ps[i];
            int rightMax = ss[i];
            if (arr[i] < leftMax && arr[i] < rightMax)
            {
                total += min(leftMax, rightMax) - arr[i];
            }
        }
        return total;
    }
};
int main()
{
}