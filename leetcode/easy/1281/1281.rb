# Runtime: 44 ms, faster than 83.10%
# Memory Usage: 209.8 MB, less than 7.04%
def subtract_product_and_sum(n)
  p = 1
  s = 0

  while n > 0 do
    t = n % 10
    n /= 10

    p *= t
    s += t
  end

  p - s
end
