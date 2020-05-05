# runtime: 48ms, faster than 89.84%
# memory: 9.3 MB, < 100.00%
def is_palindrome(x)
  x = x.to_s
  x.reverse == x
end
