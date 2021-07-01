#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
  int p=0, y=0;

  for(int i=s.size()-1; i>=0; --i) {
    if(s[i] == 'p' || s[i] == 'P') ++p;
    else if(s[i] == 'y' || s[i] == 'Y') ++y;
  }

  return p==y;

}
