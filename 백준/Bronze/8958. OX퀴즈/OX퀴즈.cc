#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    string s;
    
    cin >> n;
    
    for(int i = 0; i<n; i++) {
        cin >> s;
        
        int sum, count;
        sum = count = 0;
        
        for(int j = 0; j<s.length(); j++) {
            if(s[j] == 'O') {
                count ++;
            } else {
                count = 0;
            }
            
            sum += count;
        }
        
        cout << sum << endl;
    }
}
