#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, count = 0;
    vector<int> v;
    
    while(true) {
        cin >> a >> b;
        
        if((a == 0) && (b == 0)) {
            break;
        } else {
            //empty
        }
        
        cout << a + b << endl;
    }

}