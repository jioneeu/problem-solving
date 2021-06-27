# Runtime: 48 ms, faster than 94.92%
# Memory Usage: 209.9 MB, less than 64.41%
def max_depth(s)
  max = 0
  cnt = 0

  for i in (0...s.size) do 
    if s[i] == '('
      cnt += 1
    elsif s[i] == ')'
      cnt -= 1
    end

    max = (cnt > max) ? cnt : max
  end
  max
end
