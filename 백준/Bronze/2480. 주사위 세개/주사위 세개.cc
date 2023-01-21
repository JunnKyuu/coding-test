#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, money, bigger = 0;
    
    cin >> n1 >> n2 >> n3;
    
    if((n1 == n2) && (n1 == n3)) {
        money = 10000 + (n1 * 1000);
    } else if((n1 == n2) && (n1 != n3)) {
        money = 1000 + (n1 * 100);
    } else if((n2 == n3) && (n1 != n2)) {
        money = 1000 + (n2 * 100);
    } else if((n1 == n3) && (n1 != n2)) {
        money = 1000 + (n1 * 100);
    } else if((n1 != n2) && (n1 != n3) && (n2 != n3)) {
        if(n1 > n2) {
            if(n1 > n3) {
               bigger = n1; 
            } else {
                bigger = n3;
            }
        } else {
            if(n2 > n3) {
                bigger = n2;
            } else {
                bigger = n3;
            }
        }
        
        money = bigger * 100;
    }
    
    cout << money << endl;
    
    return 0;
}