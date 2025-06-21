# include <iostream>
# include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =1;
        for(int i=1; i<nums.size(); i++) {
            if(n<2 || nums[i]!=nums[n-2]) {
                nums[n++] = nums[i];
            }
        }
        return n;
    }
};
int main() {
   
}