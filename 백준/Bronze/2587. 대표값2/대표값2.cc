#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num, sum = 0;
    vector<int> v;
    
    for(int i = 0; i<5; i++) {
        cin >> num;
        
        v.push_back(num);
        sum += num;
    }
    
    sort(v.begin(), v.end());
    
    cout << sum / 5 << endl;
    cout << v.at(2) << endl;

    return 0;
}