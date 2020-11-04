#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

bool bruteforce(vector<int> list, int k)
{
  const int SIZE = list.size();
  
  for (int i=0; i<SIZE-1; ++i)
  {
    for(int j=i+1; j<SIZE; ++j) 
    {
      cout << list[i] << ' ' << list[j] << endl;
      if (list[i] + list[j] == k)
      {
        return true;
      }
    }
  }
  return false;
}

int main(){
  ios; cfs(15);

  vector<int> list {10, 15, 3, 7};
  int k = 17;

  cout << ((bruteforce(list, k)) ? "true" : "false") << endl;

  return 0;
}
