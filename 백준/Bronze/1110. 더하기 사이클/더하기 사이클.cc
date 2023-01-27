#include <iostream>

using namespace std;

int main() {
    int num, temp, a, b, c, d, last, count = 0;
    
    cin >> num;
    
    if(num < 10) {
        num = num * 10;
    } else {
        // empty
    }
    
    temp = num;
    
    while(1) {
        a = temp / 10;
        b = temp % 10;
        c = a + b;
        d = c % 10;
        last = (10 * b) + d;
        
        temp = last;
        
        count ++;
        
        if(last == num) {
            break;    
        } else {
            // empty
        }
    }
    
    cout << count << endl;

    return 0;
}