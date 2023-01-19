/* 사분면 고르기 */


#include <iostream>


using namespace std;


int main() {
  int x, y, q = 0;

  cin >> x >> y;

  if((x > 0) && (y > 0)) {
    q = 1;
  } else if((x < 0) && (y > 0)) {
    q = 2;
  } else if((x < 0) && (y < 0)) {
    q = 3;
  } else {
    q = 4;
  }

  cout << q << endl;

  return 0;
}