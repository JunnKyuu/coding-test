#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num, max, min = 0;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i<n; i++) {
        cin >> num;
        
        v.push_back(num);
    }
    
    max = *max_element(v.begin(), v.end());
    min = *min_element(v.begin(), v.end());
    
    cout << min << " " << max << endl;
}