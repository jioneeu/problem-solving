#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

const int MAX = 100000;
int n, value[2][MAX], dp[MAX][3];

int sticker(int c, int status) {
  if(c==n) return 0; // base case
  if(dp[c][status] != -1) return dp[c][status]; // already calculated

  int result = sticker(c+1, 0);
  if(status != 1) result = max(result, sticker(c+1, 1) + value[0][c]);
  if(status != 2) result = max(result, sticker(c+1, 2) + value[1][c]);

  // update dp 
  dp[c][status] = result; 
  return result;
}

int main(){
  ios; cfs(15);
  int t;
  cin>>t;
  for(int i=0;i<t;++i) {
    cin>>n;
    for(int j=0;j<2;++j) {
      for(int k=0; k<n; ++k) {
        cin>>value[j][k];
      }
    }

    // reset dp array
    for(int j=0; j<n; ++j) {
      for(int k=0; k<3; ++k) {
        dp[j][k] = -1;
      }
    }

    cout<<sticker(0,0)<<endl;
  }
  return 0;
}
