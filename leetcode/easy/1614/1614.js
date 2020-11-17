/**
 * Runtime: 88 ms, faster than 23.24%
 * Memory Usage: 38.4 MB, less than 92.83%
 */
var maxDepth = function(s) {
  let cnt = 0
  let max = 0

  for (let i=0; i<s.length; ++i) {
    if (s[i] == '(') ++cnt;
    else if(s[i] == ')') --cnt;

    max = (cnt > max) ? cnt : max;
  }

  return max;
};
