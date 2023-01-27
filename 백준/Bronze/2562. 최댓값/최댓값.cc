#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num, max, idx = 0;
    vector<int> v1, v2;
    
    while(v1.size() != 9) {
        cin >> num;
        
        v1.push_back(num);
    }
    
    v2 = v1;
    
    sort(v1.begin(), v1.end());
    
    vector<int>::const_iterator it = v1.cend() - 1;
    
    max = *it;
    
    cout << max << endl;
    
    for(int i = 0; i<9; i++) {
        if(max == v2.at(i)) {
            idx = i+1;
        } else {
            // empty
        }
    }
    
    cout << idx << endl;
}