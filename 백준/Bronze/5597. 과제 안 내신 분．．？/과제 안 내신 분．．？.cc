#include <iostream>

using namespace std;

int main() {
    int num = 0;
    
    bool check[31] = {};
    
    for(int i = 1; i<=28; i++) {
        cin >> num;
        check[num] = 1;
    }
    
    for(int i = 1; i<=30; i++) {
        if(check[i] == 0) {
            cout << i << endl;
        } else {
            // empty
        }
    }
}