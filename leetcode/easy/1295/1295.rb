# Runtime: 48 ms, faster than 95.38%
# Memory Usage: 210.2 MB, less than 65.38%

def find_numbers(nums)
  result =  0

  for x in nums do
    if x.to_s.length % 2 == 0
      result += 1
    end
  end

  result
end
