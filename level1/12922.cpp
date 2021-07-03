#include <string>
#include <vector>
using namespace std;

string solution(int n) {
  string s[] = {"수", "박"};
  string answer = "";
  for(int i=0; i<n; ++i) {
    answer += s[i%2];
  }
  return answer;
}
