#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (m == 0 && n != 0) nums1 = nums2;
        if (m != 0 && n == 0) nums1 = nums1;
        int s = nums1.size(); // s=m+n
        int i = m - 1;
        int j = n - 1;
        int k = s - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums1[i];
                k--;
                i--;
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        if (i < 0)
        {
            while (j >= 0)
            {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
    }
};
int main()
{
}