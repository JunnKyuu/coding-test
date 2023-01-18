/* 2588 - 세자리수 곱셈*/


#include <iostream>


using namespace std;


int main() {
  int a, b, c, d, e, total = 0;

  cin >> a >> b;

  c = a * (b % 10);
  d = a *((b / 10) % 10);
  e = a * (b / 100);
  total = c + (d * 10) + (e * 100);

  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << total << endl;

  return 0;
}