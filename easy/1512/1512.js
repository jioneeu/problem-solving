/**
 * Runtime: 80 ms, faster than 47.12%.
 * Memory Usage: 38.4 MB, less than 56.81%.
 */
var numIdenticalPairs = function(nums) {
    let cnt = 0;
    for(let i=0; i<nums.length; ++i) {
        for(let j=i+1; j<nums.length; ++j) {
            if (nums[i] == nums[j]) ++cnt;
        }
    }
    return cnt;
};
