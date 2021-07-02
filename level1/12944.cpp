#include <bits/stdc++.h>

using namespace std;

double solution(vector<int> arr) {
  int sum = accumulate(arr.begin(), arr.end(), 0);
  return (sum / (double)arr.size());
}
