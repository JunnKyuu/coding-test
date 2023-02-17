#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num = 0;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i<n; i++) {
        cin >> num;
        
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    for(const auto& e : v) {
        cout << e << endl;
    }
    
    return 0;
}