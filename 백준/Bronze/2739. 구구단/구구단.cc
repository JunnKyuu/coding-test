#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int i = 1;
    
    cin >> n;
    
    while(i<10) {
        cout << n << " " << "* " << i << " = "<< n * i << endl;
        i++;
    }
   
    return 0;
}