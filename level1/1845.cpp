#include <bits/stdc++.h>
/* https://programmers.co.kr/learn/courses/30/lessons/1845 */
using namespace std;

#if 1
int solution(vector<int> nums)
{
  int answer = 0;
  sort(nums.begin(), nums.end());
  int choose = (nums.size()) / 2;
  int types = 0;

  for(int i=1; i<nums.size(); ++i) {
    if(nums[i-1] != nums[i])
      ++types;
  }
  cout << "choose: " << choose << endl;
  cout << "types: "" << types << endl;
  cout << ((types < choose) ? types : choose) << endl;
  return answer;
}
#endif 

#if 0
int solution(vector<int> nums)
{
  int answer = 0;
  sort(nums.begin(), nums.end());
  int choose = (nums.size()) >> 1;
  int types = 1;

  for(int i=1; i<nums.size(); ++i) {
    if(nums[i-1] != nums[i])
      ++types;
  }
  return (types < choose) ? types : choose;
}
#endif
