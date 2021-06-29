#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
  vector<int> answer;
  string a ="12345";
  string b = "21232425";
  string c = "3311224455";

  vector<int> cnt(3, 0);

  for(int i=0; i<answers.size(); ++i) {
    if(a[i%a.size()]-'0' == answers[i]) ++cnt[0];   
    if(b[i%b.size()]-'0' == answers[i]) ++cnt[1];   
    if(c[i%c.size()]-'0' == answers[i]) ++cnt[2];   
  }

  int max = *max_element(cnt.begin(), cnt.end());
  if(cnt[0] == max) answer.push_back(1);
  if(cnt[1] == max) answer.push_back(2);
  if(cnt[2] == max) answer.push_back(3);
  return answer;
}
