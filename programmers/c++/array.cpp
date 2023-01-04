/*
잘라서 배열로 저장하기

문자열 my_str과 n이 매개변수로 주어질 때,
my_str을 길이 n씩 잘라서 저장한 배열을 return하도록 solution 함수를 완성해주세요.

# 1 ≤ my_str의 길이 ≤ 100
# 1 ≤ n ≤ my_str의 길이
# my_str은 알파벳 소문자, 대문자, 숫자로 이루어져 있습니다.

입출력 예
    my_str	        n	          result
"abc1Addfggg4556b"	6	   ["abc1Ad", "dfggg4", "556b"]
"abcdef123"	        3	   ["abc", "def", "123"]
*/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


// vector<string> solution(string my_str, int n) {
//     vector<string> answer;
//     return answer;
// }


int main() {
    int n = 0; // 자를 개수
    string str,tmp; // 입력받는 문자열, 임시저장할 문자열
    vector<string> v; // 문자를 저장할 벡터

    cin >> str;
    cin >> n;

    for(int i = 0; i<str.size()-1;) {
        tmp = str.substr(0,n);
        str = str.substr(n,str.size()-1);
        v.push_back(tmp);

        if(i<=str.size()) {
            i+=n;
        } else {
            v.push_back(str);
        }
    }

    for(vector<string>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << " ";
    }   

    cout << "\n";
}