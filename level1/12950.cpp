#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
  vector<vector<int>> answer;

  const int SIZE = arr1.size();

  for(int i=0; i<SIZE; ++i) {
    vector<int> temp;
    const int vSize = arr1[i].size();
    for(int j=0; j<vSize; ++j) {
      int x = arr1[i][j] + arr2[i][j];
      temp.push_back(x);
    }
    answer.push_back(temp);
  }
  return answer;
}
