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
#include <vector>


using namespace std;


// int solution(vector<int> array) {
//   int answer = 0;


//   return answer;
// }


int main() {
  vector<int> v;
  int num, count = 0;

  while(cin >> num) {
    v.push_back(num);
  }

  for(vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
    cout << *it << " ";
  }

  cout << "\n";

  for(int i = 0; i<v.size(); i++) {
    if(v[i] == 7) {
      count++;
    } else {
      //empty
    }
  }

  cout << "7 : " << count << endl;
}