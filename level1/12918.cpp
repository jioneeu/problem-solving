#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
  const int SIZE = s.size();
  if(SIZE!=4 && SIZE!=6) return false;
  for(int i=0; i<SIZE; ++i) if(isalpha(s[i])) return false;
  return true;
}
