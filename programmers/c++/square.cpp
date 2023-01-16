/*
제곱수 판별하기

어떤 자연수를 제곱했을 때 나오는 정수를 제곱수라고 합니다. 
정수 n이 매개변수로 주어질 때, n이 제곱수라면 1을 
아니라면 2를 return하도록 solution 함수를 완성해주세요.

제한 사항

# 1 ≤ n ≤ 1,000,000

입출력 예

 n	result
144	  1
976	  2
*/


#include <iostream>
#include <cmath>


using namespace std;


int solution(int n) {
  int answer = 0;

  if(sqrt(n) == (float)sqrt(n)) {
    // n이 제곱수일 경우
    // sqrt함수는 제곱근을 구하는 함수
    // n의 제곱근이 정수 == 실수이면 n은 제곱수
    answer = 1;
  } else {
    // 아닐 경우
    answer = 0;
  }

  return answer;
}


int main() {
  int n = 0; // 입력받을 정수

  cin >> n;

  cout << "제곱수 판별 결과 : " << solution(n) << endl;
}