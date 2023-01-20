#include <iostream>

using namespace std;

int main() {
    int h, m, o = 0;
    
    cin >> h >> m >> o;
    
    m = m + o;
    
    while(m >= 60) {
        m = m - 60;
        h = h + 1;
    }
    
    if(h > 23) {
        h = h - 24;
    }
    
    cout << h << " " << m << endl;
    
    return 0;
}