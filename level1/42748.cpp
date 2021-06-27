/* https://programmers.co.kr/learn/courses/30/lessons/42748 */
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
  vector<int> answer;
  for(int i=0; i<commands.size(); ++i) {
    vector<int> c = commands[i];
    vector<int> temp;
    for(int i=c[0]; i<=c[1]; ++i) temp.push_back(array[i-1]);
    sort(temp.begin(), temp.end());
    answer.push_back(temp[c[2]-1]);
  }
  return answer;
}
