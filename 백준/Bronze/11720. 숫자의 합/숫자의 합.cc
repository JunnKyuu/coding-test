#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, num, sum = 0;
    string str, tmp;
    
    cin >> n;
    
    cin >> str;
    
    for(int i = 0; i<str.size(); i++) {
        tmp = str[i];
        num = stoi(tmp);
        sum += num;
    }
    
    cout << sum << endl;
    
    return 0;
}