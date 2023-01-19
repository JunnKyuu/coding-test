/* 윤년 */


#include <iostream>


using namespace std;


int main() {
  int y, answer = 0;

  cin >> y;

  if((y % 4 == 0) &&((y % 100 != 0) || (y % 400 == 0))) {
    answer = 1;
  } else {
    // empty
  }

  cout << answer << endl;

  return 0;
}