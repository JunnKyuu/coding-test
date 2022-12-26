/*
다음에 올 숫자

등차수열 혹은 등비수열 common이 매개변수로 주어질 때, 
마지막 원소 다음으로 올 숫자를 return 하도록 solution 함수를 완성해보세요.

# 2 < common의 길이 < 1,000
# -1,000 < common의 원소 < 2,000
# 등차수열 혹은 등비수열이 아닌 경우는 없습니다.
# 공비가 0인 경우는 없습니다.
*/


#include <iostream>
#include <vector>


using namespace std;


int solution(vector<int> common) {

  vector<int>::const_iterator it = common.cend() - 1; // 이터레이터 사용해서 마지막 원소 찾기
  int val = *it;

  if((2*common.at(1)) == (common.at(0) + common.at(2))) {
    common.push_back(val + (common.at(1) - common.at(0)));
    // 등차중항
  } else {
    common.push_back(val * (common.at(1) / common.at(0)));
    // 등비중항
  }

  vector<int>::const_iterator answer_ptr = common.cend()-1;
  int answer = *answer_ptr;
  return answer;
}


int main() {
  vector<int> v;
  int element= 0;

  while(cin >> element) {
    v.push_back(element);
  }

  cout << "마지막 원소 : " << solution(v) << endl;
}