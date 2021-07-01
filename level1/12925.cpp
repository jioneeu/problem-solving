#include <string>
#include <vector>

using namespace std;

int solution(string s) {
  int neg = 1;
  int answer = 0;
  for(int i=0; i<s.size(); ++i) {
    if(s[i]=='-') {
      neg = -1;
      continue;
    } else if (s[i] == '+') {
      continue;
    } else {
      answer = (answer*10) + (s[i]-'0');
    }
  }
  return neg*answer;
}

#if 0
return stoi(s);
return atoi(s.c_str());
#endif
