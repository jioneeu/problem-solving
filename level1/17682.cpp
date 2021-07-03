#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
  stack<int> s;

  string str = dartResult;
  const int SIZE = str.size();
  for(int i=0; i<SIZE; ++i) {
    if(isdigit(str[i]) && isdigit(str[i+1])) {
      s.push(10);
      ++i;
    } else if (isdigit(str[i])) {
      s.push(str[i]-'0');
    } else if(isalpha(str[i])) {
      int pts = s.top(); s.pop();
      if(str[i]=='D') pts *= pts;
      if(str[i]=='T') pts *= pts * pts;
      s.push(pts);
    } else if(str[i]=='*') {
      int curr = s.top(); s.pop();
      curr *= 2;
      if(s.empty()) {
        s.push(curr);
        continue;
      }
      int prev = s.top(); s.pop();
      prev *= 2;
      s.push(prev);
      s.push(curr);
    } else if(str[i]=='#') {
      int pts = s.top(); s.pop();
      s.push(pts*-1);
    }
  }

  int sum = 0;
  while(!s.empty()) {
    sum += s.top();
    s.pop();
  }
  return sum;
}
