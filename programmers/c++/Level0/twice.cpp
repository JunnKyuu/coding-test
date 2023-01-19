/*
세균 증식

어떤 세균은 1시간에 두배만큼 증식한다고 합니다.
처음 세균의 마리수 n과 경과한 시간 t가 매개변수로 주어질 때 
t시간 후 세균의 수를 return하도록 solution 함수를 완성해주세요.


제한사항

# 1 ≤ n ≤ 10
# 1 ≤ t ≤ 15


입출력 예

 n	t	  result
 2	10	 2048
 7	15	229,376
*/


#include <iostream>
#include <cmath> // pow함수를 쓰기 위한 헤더
#include <string>
#include <vector>


using namespace std;


int solution(int n, int t) {
  int total = 0; // 총 세균 수

  total = n * pow(2, t); // pow(2, t) --> 2의 t승을 나타낸다.

  return total;
}


int main() {
  int n, t = 0; // 세균 수, 시간

  cin >> n >> t;

  cout << "총 세균 수 : " << solution(n, t) << endl;
}