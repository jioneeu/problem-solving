#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
  int answer = 0;
  for(int i=signs.size()-1; i>=0; --i) {
    answer += ((signs[i]) ? absolutes[i] : absolutes[i] * -1);
  }
  return answer;
}
