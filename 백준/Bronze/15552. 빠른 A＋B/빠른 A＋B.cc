#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 0;
    
    cin >> n;
    
    int arr[n] = {};
    
    for(int i = 0; i<n; i++) {
        int a, b = 0;
        
        cin >> a >> b;
        
        arr[i] = a + b;
    }
    
    for(int i = 0; i<n; i++) {
        cout << arr[i] << "\n";
    }
    
    return 0;
}