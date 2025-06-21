# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        for(int i=0; i<nums.size(); i++) {
            if(i>maxIndex) return false;
            maxIndex = max(maxIndex, i+nums[i]);
        }
        return true;
    }
};
int main() {
   
}