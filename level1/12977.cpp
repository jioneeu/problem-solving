#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
  int answer = 0;

  for(int i=0; i<nums.size()-2; ++i) {
    for(int j=i+1; j<nums.size()-1; ++j) {
      for(int k=j+1; k<nums.size(); ++k) {
        int s = nums[i]+nums[j]+nums[k];
        int t = sqrt(s);
        for(int m=2; m<=t; ++m) {
          if(s%m == 0) {
            s = 51;
            break;
          }
        }
        if(s!=51) ++answer;
      }
    }
  }

  return answer;
}
