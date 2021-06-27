=begin
Runtime: 44ms, faster than 83.48%
Memory Usage: 209.8 MB
=end
def defang_i_paddr(address)
    i = 1
    while (i < address.length) do
        if address[i-1] == '.'
            address.insert(i-1, '[')
            address.insert(i+1, ']')
            i += 2
        end
        i += 1
    end
    address
end
