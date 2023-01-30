#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num, tmp = 0;
    vector<int> v;
    
    for(int i = 0; i<10; i++) {
        cin >> num;
        tmp = num % 42;
        v.push_back(tmp);
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    cout << v.size() << endl;
    
}