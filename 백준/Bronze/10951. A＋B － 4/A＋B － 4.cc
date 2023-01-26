#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b = 0;
    vector<int> v;
    
    while(cin >> a >> b) {
        v.push_back(a + b);
    }
    
    for(vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}