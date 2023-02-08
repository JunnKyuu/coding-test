#include <iostream>

using namespace std;

int arithmetic(int num) {
    int count = 0;
    
    if(num < 100) {
        count = num;
    } else {
        count = 99;
        
        for(int i = 100; i<num+1; i++) {
            int hun = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;
        
            if((hun - ten) == (ten - one)) {
                count ++;
            } else {
                // empty
            }
        }
    }
    
    return count;
}

int main() {
    int num = 0;
    
    cin >> num;
    
    cout << arithmetic(num) << endl;
    
    return 0;
}