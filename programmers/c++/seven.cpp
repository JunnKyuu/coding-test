/*
7의 개수

머쓱이는 행운의 숫자 7을 가장 좋아합니다.
정수 배열 array가 매개변수로 주어질 때,
7이 총 몇 개 있는지 return 하도록 solution 함수를 완성해보세요.

# 1 ≤ array의 길이 ≤ 100
# 0 ≤ array의 원소 ≤ 100,000

   array	   result
[7, 77, 17]	    4
[10, 29]        0
*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


int solution(vector<int> vint) {
  int count = 0; // 입력할 정수, 7의 개수
  string tmp; // 임시로 저장할 문자열
  vector<string> vstr; // 문자열을 저장할 벡터

  for(int i = 0; i<vint.size(); i++) {
    tmp = to_string(vint[i]); // to_string 함수로 정수를 문자열로 바꾸기
    vstr.push_back(tmp);
  }

  for(int i = 0; i<vstr.size(); i++) {
    tmp = vstr[i];

    for(int j = 0; j<tmp.size(); j++) {
      if(tmp[j] == '7') {
        count ++;
      } else {
        // empty
      }
    } // 바꾼 문자열에 '7'이 포함되면 개수 증가
  }

  return count;
}


int main() {
  int num = 0; // 입력할 정수
  vector<int> vint; // 정수를 저장할 벡터

  while(cin >> num) {
    vint.push_back(num);
  }

  cout << "7의 개수 : " << solution(vint) << endl;
}