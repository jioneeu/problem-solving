# runtime: 48ms, faster than 89.84%
# memory: 9.3 MB, < 100.00%
def is_palindrome(x)
  x = x.to_s
  x.reverse == x
end

# runtime: 40ms, faster than 98.35%
# memory: 9.2 MB, less than 100.00%
def is_palindrome_no_string(x)
    return false if x < 0 or (x%10==0 and x!=0)
    rev = 0
    temp = x
    while temp > 0
        rev = rev*10 + temp%10
        temp /= 10
    end
    rev == x
end
