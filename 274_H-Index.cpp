# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int h = 0;
        for(int i=0;i<n;i++) {
            int mini = min(arr[i], n-i);
            h = max(h,mini);
        }
        return h;
    }
};
int main() {
   
}