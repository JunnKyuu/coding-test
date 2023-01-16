#include <iostream>
#include <cmath>


using namespace std;


int main() {
  int n, squared, root;

  cin >> n;

  squared = pow(n, 2);
  root = sqrt(squared);

  cout << squared << endl;
  cout << root << endl;
}