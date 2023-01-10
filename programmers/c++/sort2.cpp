/*
문자열 정렬하기2

영어 대소문자로 이루어진 문자열 my_string이 매개변수로 주어질 때, 
my_string을 모두 소문자로 바꾸고 알파벳 순서대로 정렬한 문자열을 
return 하도록 solution 함수를 완성해보세요.


제한사항
# 0 < my_string 길이 < 100


입출력 예

my_string	  result
 "Bcad"	    "abcd"
 "heLLo"	    "ehllo"
 "Python"	  "hnopty"
*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


// string solution(string my_string) {
//     string answer = "";

//     return answer;
// }


int main() {
  string str;

  cin >> str;

  for(int i = 0; i<str.size(); i++) {
    if(('A' <= str[i]) || (str[i] <= 'Z')) {
      str[i] = str[i] - 'A' + 'a';
    } else {
      // empty
    }
  } 

  cout << str << endl;  
}