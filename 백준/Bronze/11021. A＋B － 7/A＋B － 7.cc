#include <iostream>

using namespace std;

int main() {
    int n = 0;
    
    cin >> n;
    
    int arr[n] = {};
    
    for(int i = 0; i<n; i++) {
        int a, b = 0;
        
        cin >> a >> b;
        
        arr[i] = (a + b);
    }
    
    for(int i = 0; i<n; i++) {
        cout << "Case #" << i+1 << ": " << arr[i] << endl;
    }
}