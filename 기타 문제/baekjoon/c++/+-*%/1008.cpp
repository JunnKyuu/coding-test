#include <iostream>


using namespace std;


int main() {
  double a, b = 0;

  cin >> a >> b;

  cout.precision(9); // 소수점 9번째 고정
  cout << fixed; // 소수점을 고정해서 출력
  
  cout << a/b << endl;
}