#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int totalGas = 0, totalCost = 0;
        for (int i = 0; i < n; i++)
        {
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if (totalCost > totalGas) return -1;
        int currIdx = 0;
        int startIdx = 0;
        for (int i = 0; i < n; i++)
        {
            currIdx += gas[i] - cost[i];
            if (currIdx < 0)
            {
                startIdx = i + 1;
                currIdx = 0;
            }
        }
        return startIdx;
    }
};
int main()
{
}