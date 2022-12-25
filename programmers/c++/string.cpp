/*
문자열안에 문자열

문자열 str1, str2가 매개변수로 주어집니다. 
str1 안에 str2가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.
*/


#include <iostream>
#include <string>


using namespace std;


// int solution(string str1, string str2) {
//   int answer = 0;

//   return answer;
// }


int main() {
  string str1, str2; // 문자열1, 문자열2
  int answer = 0; // 답

  cin >> str1;
  cin >> str2;
  
  cout << "str1 : " << str1 << endl;
  cout << "str2 : " << str2 << endl;


  if(str1.size() < str2.size()) {
    answer = 2;
  } else {
    for(int i = 0; i<str1.size(); i++) {
      if() {

      } else {
      }
    }
  }
  
  // if() {
  //   answer = 1;
  // } else {
  //   answer = 2;
  // }

  // cout << "answer : " << answer << endl;

  // for(int i = 0; i<str1.size(); i++) {
  //   cout << str1[i] << endl;
  // }
}