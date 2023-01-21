#include <iostream>

using namespace std;

int main() {
    int n = 0;
    
    cin >> n;
    
    int arr[n] = {};
    
    for(int i = 0; i<n; i++) {
        int n1, n2 = 0;
        
        cin >> n1 >> n2;
        
        arr[i] = n1 + n2;
    }
    
    for(int i = 0; i<n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}