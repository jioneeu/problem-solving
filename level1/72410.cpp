#include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
  string x = "";
  const int SIZE = new_id.size();
  for(int i=0; i<SIZE; ++i) {
    char c = new_id[i];
    if(c >= 65 && c <= 90) x += c+32;
    else if(isalnum(c) || c=='-' || c=='_') x += c;  
    else if (c=='.') {
      if(x[x.size()-1] != '.') x += c;
    }
  }

  if(x[0]=='.') x = x.substr(1);
  if(x[x.size()-1]=='.') x = x.substr(0, x.size()-1);
  if(x.size() > 15) x = x.substr(0, (x[14]=='.') ?14: 15);
  if(x[x.size()-1]=='.') x = x.substr(0, x.size()-1);
  if(x.size()==0) x+="a";
  while(x.size() <= 2) x+=x[x.size()-1];

  return x;
}
