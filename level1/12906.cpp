#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
  vector<int> answer;
  if(arr.size() == 0) return answer;

  answer.push_back(arr[0]);

  for(int i=1; i<arr.size(); ++i) {
    if(answer[answer.size()-1] != arr[i]) answer.push_back(arr[i]);
  }

  return answer;
}
