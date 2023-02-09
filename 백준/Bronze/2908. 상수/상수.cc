#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, bigger;
    
    cin >> s1 >> s2;
    
    for(int i = 2; i>=0; i--) {
        if(s1[i] > s2[i]) {
            bigger = s1;
            break;   
        } else if(s1[i] < s2[i]) {
            bigger = s2;
            break;
        }
        
    }
    
    cout << bigger[2] << bigger[1] << bigger[0] << endl;
}