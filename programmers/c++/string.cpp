/*
문자열안에 문자열

문자열 str1, str2가 매개변수로 주어집니다. 
str1 안에 str2가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.
*/


#include <iostream>
#include <string>


using namespace std;


int solution(string str1, string str2) {
  int answer = 0;

  for(int i = 0; i<str1.size(); i++) {
    if(str1.substr(i, str2.size()) == str2) {
      answer = 1;
      break; // 같은 것을 찾으면 멈춤
    } else {
      answer = 2;
    }
  }

  return answer;
}


int main() {
  string str1, str2; // 문자열1, 문자열2
  int answer = 0; // 답

  cin >> str1;
  cin >> str2;
  
  cout << "answer : " << solution(str1, str2) << endl;
}