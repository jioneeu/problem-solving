#include <string>
#include <vector>
using namespace std;

string solution(string s) {
  int mid = s.size() >> 1;
  string str = "";
  if((s.size()&1) == 0) {
    str += s[mid-1];
    str += s[mid];
  }
  else str = s[mid];
  return str;
}
