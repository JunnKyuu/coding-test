#include <iostream>
#include <string>

using namespace std;

int main() {
    int test, cnt = 0;
    string str;
    
    cin >> test;
    
    for(int i = 0; i<test; i++) {
        cin >> cnt;
        cin >> str;
        
        for(int j = 0; j<str.length(); j++) {
            for(int k = 0; k<cnt; k++) {
                cout << str[j];
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}