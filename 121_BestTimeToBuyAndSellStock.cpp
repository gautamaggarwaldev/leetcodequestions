# include <iostream>
# include <vector>
using namespace std;
class Solution1 {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i]>nums[j]) continue;
                else {
                    profit = max(profit,nums[j]-nums[i]);
                }
            }
        }
        return profit;   
    }
}; // This gives a time complexity of O(n^2) and space complexity of O(1).
/********************************************************************************************* */
class Solution2 {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int maximumProfit = 0;
        int minPrice = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++) {
            maximumProfit = nums[i] - minPrice;
            profit = max(maximumProfit, profit);
            minPrice = min(minPrice, nums[i]);
        }
        return profit;
    }
};// This gives a time complexity of O(n) and space complexity of O(1).
int main() {
   
}