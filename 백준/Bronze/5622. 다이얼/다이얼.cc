#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int num, sum = 0;
    
    cin >> word;
    
    for(int i = 0; i<word.length(); i++) {
        if((word[i] == 'A') || (word[i] == 'B') || (word[i] == 'C')) {
            num = 3;
        } else if((word[i] == 'D') || (word[i] == 'E') || (word[i] == 'F')) {
            num = 4;
        } else if((word[i] == 'G') || (word[i] == 'H') || (word[i] == 'I')) {
            num = 5;
        } else if((word[i] == 'J') || (word[i] == 'K') || (word[i] == 'L')) {
            num = 6;
        } else if((word[i] == 'M') || (word[i] == 'N') || (word[i] == 'O')) {
            num = 7;
        } else if((word[i] == 'P') || (word[i] == 'Q') || (word[i] == 'R') || (word[i] == 'S')) {
            num = 8;
        } else if((word[i] == 'T') || (word[i] == 'U') || (word[i] == 'V')) {
            num = 9;
        } else {
            num = 10;
        }
        
        sum += num;
    }
    
    cout << sum << endl;
    
    return 0;
}