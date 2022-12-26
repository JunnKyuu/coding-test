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


// int solution(vector<int> common) {
//     int answer = 0;


//     return answer;
// }


int main() {
  vector<int> v;
  int element,count = 0;

  while(cin >> element) {
    v.push_back(element);
  }

  vector<int>::const_iterator it = v.cbegin();

  cout << "v : ";

  for(vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
    cout << *it << " ";
    count++;
  }

  cout << "\n";

  for(int i = 1; i<=count; i++) {
    if((2*v[i]) == (v[i-1] + v[i+1])) {
      v[count + 1] = v[count] + (v[i] - v[i-1]);
    } else {
      v[count + 1] = v[count] * (v[i+1] / v[i]);
    }
  }

  cout << "마지막 원소 : " << v[count+1] << endl;
}