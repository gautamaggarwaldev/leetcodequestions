# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;
class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> map;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(map.find(val)!=map.end()) return false;
        v.push_back(val);
        map[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end()) return false;
        int idx = map[val];
        int lastElement = v.back();
        swap(v[idx],v.back());
        map[lastElement] = idx;
        v.pop_back();
        map.erase(val);
        return true;

    }
    
    int getRandom() {
        int random = rand() % v.size();
        return v[random];
    }
};

int main() {
   
}