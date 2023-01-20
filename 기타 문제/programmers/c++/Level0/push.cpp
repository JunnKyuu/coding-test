/*
문자열 밀기

문자열 "hello"에서 각 문자를 오른쪽으로 한 칸씩 밀고 
마지막 문자는 맨 앞으로 이동시키면 "ohell"이 됩니다. 
이것을 문자열을 민다고 정의한다면 문자열 A와 B가 매개변수로 주어질 때,
A를 밀어서 B가 될 수 있다면 몇 번 밀어야 하는지 횟수를 return하고 
밀어서 B가 될 수 없으면 -1을 return 하도록 solution 함수를 완성해보세요.


# 0 < A의 길이 = B의 길이 < 100
# A, B는 알파벳 소문자로 이루어져 있습니다.

  A	       B	  result
"hello"	"ohell"	  1
"apple"	"elppa"	 -1
*/


#include <iostream>
#include <string>


using namespace std;


int solution(string str1, string str2) {
  // hello -> ohell -> lohel -> ... 이런식으로 비교하면서 같으면 answer 출력

  int answer = 0;
  bool check = false;

  if(str1 == str2) {
    answer = 0;
  } else {
    for(int i = 0; i<str1.size()-1; i++) {
      char s = str1[str1.size()-1];
      str1 = str1.substr(0, str1.size()-1);
      str1 = s + str1;

      answer++;

      if(str1 == str2) {
        check = true;
        break;
      } else {
        // empty
      }
    }
  }

  if(check == true) {
    // empty
  } else {
    answer = -1;
  }

  return answer;
}


int main() {
  string str1, str2;

  cin >> str1;
  cin >> str2;

  cout << "answer : " << solution(str1,str2) << endl;
}