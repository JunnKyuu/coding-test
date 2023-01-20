/*
옹알이(1)

머쓱이는 태어난 지 6개월 된 조카를 돌보고 있습니다. 
조카는 아직 "aya", "ye", "woo", "ma" 네 가지 
발음을 최대 한 번씩 사용해 조합한(이어붙인) 발음밖에 하지 못합니다.
문자열 배열 babbling이 매개변수로 주어질 때, 머쓱이의 조카가 
발음할 수 있는 단어의 개수를 return 하도록 solution 함수를
완성해주세요!
*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


int solution(vector<string> babbling) {
  int answer = 0;

  for(int i = 0; i<babbling.size(); i++) {
    bool check = false;

    for(int j = 0; j<babbling[i].size(); j++) {
      if(babbling[i].substr(j, 3) == "aya") {
        j+=2;
      } else if(babbling[i].substr(j, 2) == "ye") {
        j+=1;
      } else if(babbling[i].substr(j, 3) == "woo") {
        j+=2;
      } else if(babbling[i].substr(j, 2) == "ma") {
        j+=1;
      } else {
        check = true;
        break;
      }
    }

    if(!check) {
      answer++;
    } else {
      // empty
    }
  }

  return answer;
}


int main() {
  int answer = 0;

  vector<string> babbling;
  string str;

  for(int i = 0; i<5; i++) {
    cin >> str;
    babbling.push_back(str);
  }

  answer = solution(babbling);

  cout << "answer : " << answer << endl;
}
