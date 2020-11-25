/**
 * Runtime: 80 ms, faster than 75.32%
 * Memory Usage: 39.1 MB, less than 77.61%
 */
var findNumbers = function(nums) {
  let result = 0;

  nums.forEach(e => {
    if (e.toString().length % 2 == 0) ++result;
  });

  return result;
};
