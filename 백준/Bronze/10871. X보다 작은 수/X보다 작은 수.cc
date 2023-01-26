#include <iostream>

using namespace std;

int main() {
    int n, x, num = 0;
    
    cin >> n >> x;
    
    int arr[n] = {};
    
    for(int i = 0; i<n; i++) {
        cin >> num;
        
        arr[i] = num;
    }
    
    for(int i = 0; i<n; i++) {
        if(x > arr[i]) {
            cout << arr[i] << " ";
        } else {
            //empty
        } 
    }
    
    cout << "\n";
}