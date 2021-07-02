#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
  long long answer = 0;
  string s;
  stringstream ss;
  ss << n;
  ss >> s;
  sort(s.rbegin(), s.rend());
  answer = stoll(s);
  return answer;
}
