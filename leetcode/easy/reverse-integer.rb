# Runtime: 28ms, 96.40%
# Memory: 9.3 MB, < 100.00%
def reverse(x)
    neg = x < 0 ? -1 : 1
    x =  x.to_s.reverse.to_i * neg
    (x > (2**31)-1 or x < -1*(2**31)) ? 0 : x
end
