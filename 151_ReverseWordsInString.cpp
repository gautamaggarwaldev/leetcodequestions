# include <iostream>
# include <vector>
# include <sstream>

using namespace std;
class Solution {
public:
    vector<string> StringIntoWords(string &s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }
        return words;
    }
    string reverseWords(string s) {
        if(s.length()==0) return "";

        vector<string> result = StringIntoWords(s);
        reverse(result.begin(), result.end());

        string ans = "";
        for (int i = 0; i < result.size(); i++) {
            ans += result[i];
            if (i != result.size() - 1) ans += " ";
            cout << ans;
        }
        return ans;

    }
};
int main() {
   
}