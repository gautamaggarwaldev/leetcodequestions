# include <iostream>
# include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        int size = nums.size();
        for(int i=1;i<size; i++) {
            if(nums[n]!=nums[i]) {
                n++;
                nums[n]= nums[i];
            }
        }
        return n+1;
    }
};
int main() {
   
}