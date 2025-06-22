# include <iostream>
# include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        // prefix product array
        pre[0] = 1;
        int p = nums[0];
        for(int i=1;i<n;i++) {
            pre[i] = p; //phele place karna hai
            p *= nums[i]; // baad mein multiply krna hai
        }
        // suffix product array
        suff[n-1] = 1;
        p=nums[n-1];
        for(int i=n-2;i>=0;i--) {
            suff[i] = p;
            p *= nums[i];
        }
        for(int i=0;i<n;i++) {
            nums[i] = pre[i]*suff[i];
        }
        return nums;
    }
};
int main() {
   
}