#include <bits/stdc++.h>
using namespace std;

#if 1 
long long solution(long long n) {
  long long a = sqrt(n);
  long long ans = (a*a == n) ? (a+1)*(a+1) : -1;
  return ans;
}
#endif

#if 0
long long solution(long long n) {
  const int MAX = 7071068; // ceil(sqrt(50000000000000))
  long long ans = -1;
  for(long long i=1; i<=MAX; ++i) {
    if(i*i > n) break;
    if(i*i == n) {
      ans = (i+1)*(i+1);
      break;
    }
  }

  return ans;
}
#endif
