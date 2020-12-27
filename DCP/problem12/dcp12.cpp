#include <iostream>
using namespace std;

int staircase(int n, int a=0, int b=1) {
  if (n==0) return a;
  if (n==1) return b;
  return staircase(n-1, b, a + b);
}

int main()
{
  int n;
  cin >> n;
  cout << staircase(n) << endl;
}
