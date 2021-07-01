#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
  int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string day[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
  int nDays = 0;

  for(int i=0; i<a-1; ++i) nDays += days[i];
  nDays += b;

  return day[nDays%7];
}
