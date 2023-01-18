#include <iostream>

using namespace std;

int main() {
    int k = 1;
    int q = 1;
    int r = 2;
    int b = 2;
    int kn = 2;
    int p = 8;
    
    int ink, inq, inr, inb, inkn ,inp;
    
    cin >> ink;
    cin >> inq;
    cin >> inr;
    cin >> inb;
    cin >> inkn;
    cin >> inp;

    cout << (k - ink) << " ";
    cout << (q - inq) << " ";
    cout << (r - inr) << " ";
    cout << (b - inb) << " ";
    cout << (kn - inkn) << " ";
    cout << (p - inp) << " ";
    
    return 0;
}