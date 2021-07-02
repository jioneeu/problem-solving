#include <bits/stdc++.h>
using namespace std;

#if 1
#include <bits/stdc++.h>
vector<int> solution(vector<int> arr) {
    vector<int> ret = arr;
    ret.erase(min_element(ret.begin(), ret.end()));
    
    return (ret.size() == 0) ? vector<int>(1, -1) : ret;
}
#endif

#if 0
vector<int> solution(vector<int> arr) {
  vector<int> answer;
  int minPos = 0;
  int min = arr[0];
  const int SIZE = arr.size();
  for(int i=1; i<SIZE; ++i) {
    if(arr[i] < min) {
      min = arr[i];
      minPos = i;
    }
  }

  for(int i=0; i<SIZE; ++i) {
    if(minPos == i) continue;
    answer.push_back(arr[i]);
  }

  if(answer.size() == 0) answer.push_back(-1);
  return answer;
}
#endif
