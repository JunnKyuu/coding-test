#include <iostream>

using namespace std;

int main() {
  int a, b, v = 0;

  cin >> a >> b >> v;

  int day;

  if(((v - a) % (a - b)) == 0) {
    day = (v - a) / (a - b);
  } else {
    day = (v - a) / (a - b) + 1;
  }

  cout << day + 1 << endl;

  return 0;
}