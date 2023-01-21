#include <iostream>

using namespace std;

int main() {
    int x, n, a, b, sum = 0;
    int arr[n] = {};
    
    cin >> x >> n;
    
    for(int i = 0; i<n; i++) {
        cin >> a >> b;
        
        sum += (a * b);
    }
    
    if(x == sum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}