#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int n, s;
vector<int> v;
int cnt;

void answer(int i, int sum) {
  if(i==n) return;
  cout<<"sum: "<<sum<<' '<<"v[i]: " << v[i] << endl;
  if(sum+v[i]==s) ++cnt;

  answer(i+1, sum);
  answer(i+1, sum+v[i]);
}

int main(){
  ios; cfs(15);
  cin>>n>>s;
  rep(i, n) {
    int temp;
    cin>>temp;
    v.push_back(temp);
  }

  answer(0, 0);
  cout << cnt << endl;
  return 0;
}
