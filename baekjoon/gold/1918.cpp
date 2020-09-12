#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int priority(char c) {
  if(c=='*' || c=='/') return 2;
  if(c=='+' || c=='-') return 1;
  return 0;
}
int main(){
  ios; cfs(15);
  string str;
  cin>>str;
  vector<char> op;

  const int SIZE = str.size();
  rep(i, SIZE) {
    if(str[i]>='A' && str[i]<='Z') cout<<str[i];
    else if(str[i]=='(') op.push_back('(');
    //    else if(str[i]=='*' || str[i]=='/') op.push_back(str[i]);
    else if(str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-'){
      if(op.size()==0 || op.back() == '(' || priority(str[i]) > priority(op.back())) 
        op.push_back(str[i]);
      else
      {
        while(priority(str[i]) <= priority(op.back())) {
          char temp = op.back();
          if(temp=='(') break;
          cout<<temp;
          op.pop_back();
        }
        op.push_back(str[i]);
      }
    }
    else if(str[i]==')') {
      while(true) {
        char temp = op.back();
        op.pop_back();
        if(temp=='(') break;
        cout<<temp;
      }
    }
  }

  while(op.size()) {
    cout<<op.back();
    op.pop_back();
  }
  cout<<endl;
  return 0;
}
