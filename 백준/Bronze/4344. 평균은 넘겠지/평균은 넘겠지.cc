#include <iostream>

using namespace std;

int main() {
    int c, stu;
    double count, avg = 0;
    
    cin >> c;
    
    for(int i = 0; i<c; i++) {
        cin >> stu;
        
        int sco[stu] = {};
        
        for(int j = 0; j<stu; j++) {
            cin >> sco[j];
            
            avg += sco[j];
        }
        
        avg = avg / stu;
        
        for(int k = 0; k<stu; k++) {
            if(sco[k] > avg) {
                count ++;
            } else {
                // empty
            }
        }
        
        cout << fixed;
        cout.precision(3);
        cout << count / stu * 100 * 1000 / 1000 << "%" << endl;
        
        avg = 0;
        count = 0;
    }
    
    return 0;
}