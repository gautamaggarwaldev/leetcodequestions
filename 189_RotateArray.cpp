# include <iostream>
# include <vector>
using namespace std;
class Solution {
public:
    void reversePart(int i, int j, vector<int>& nums) {
        while(i<=j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k %= n;
        reversePart(0,n-k-1,nums);
        reversePart(n-k, n-1, nums);
        reversePart(0, n-1, nums);
    }
};
int main() {
   
}