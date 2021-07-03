#include <string>
using namespace std;

string solution(string s, int n) {
  const int SIZE = s.size();
  for(int i=0; i<SIZE; ++i) {
    if(s[i]==' ') continue;
    if(islower(s[i])) {
      s[i] = 97 + ((s[i]-97+n)%26);
    } else if(isupper(s[i])) {
      s[i] = 65 + ((s[i]-65+n)%26);
    }
  }
  return s;
}
