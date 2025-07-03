# include <iostream>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        int nums[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string val[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int n = sizeof(nums)/sizeof(nums[0]);
        string ans = "";
        for(int i=0;i<n;i++) {
            if(num == 0) break;
            int times = num/nums[i];
            while(times) {
                ans += val[i];
                times--;
            }
            num %= nums[i];
        }
        return ans;

    }
};
int main() {
   
}