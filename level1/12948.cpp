#include <string>
#include <vector>
using namespace std;

string solution(string phone_number) {
  const int BOUND = phone_number.size()-4;
  for(int i=0; i<BOUND; ++i) phone_number[i] = '*';
  return phone_number;
}
