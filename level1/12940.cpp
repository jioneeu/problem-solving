#include <bits/stdc++.h>

using namespace std;

// euclidean
int gcd(int a, int b)
{
  if (a == 0) return b;
  return gcd(b % a, a);
}

// 최소공배수
int lcm(int a, int b) {
  return (a*b)/gcd(a, b);
}

vector<int> solution(int n, int m) {
  vector<int> answer;
  answer.push_back(gcd(n,m));
  answer.push_back(lcm(n,m));
  return answer;
}
