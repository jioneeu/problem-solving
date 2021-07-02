#include <bits/stdc++.h>

using namespace std;

int solution(int num) {
  long long n = num;
  int i;
  for(i=0; i<500; ++i) {
    if(n == 1) break;
    if((n&1)==0) n = n >> 1;
    else n = n * 3 + 1;
  }

  return (n==1) ? i : -1;
}
