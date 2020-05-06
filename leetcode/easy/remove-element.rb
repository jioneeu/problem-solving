# runtime: 28ms, 97.33%
# memory: 9.3 MB, < 100.00%
def remove_element(nums, val)
  size = nums.size
  cnt = nums.count val
  nums.delete val
  1.upto(cnt) { nums.push val }
  return size - cnt
end

nums = [0,1,2,2,3,0,4,2]
puts remove_element(nums, 2)
