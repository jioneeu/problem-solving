# runtime: 44 ms, faster than 36.72%
# memory: 9.3 MB, < 100.00%
# time complexity: o(nm), n = number of strs, m = length of the longest str
def word_by_word(strs)
  prefix = strs[0]

  for i in 1...strs.size
    temp = strs[i]

    cnt = 0
    for i in 0...temp.size
      if prefix[i] == temp[i]
        cnt += 1
      else
        break
      end
    end
    prefix = temp[0...cnt]
  end

  prefix
end

# runtime: 36 ms, faster than 85.84%
# memory: 9.3 MB, < 100.00%
# time complexity: o(nm)
def char_by_char(strs)
  minlen = 100
  strs.each do |s|
    minlen = s.size < minlen ? s.size : minlen
  end

  prefix = ""
  for i in 0...minlen
    curr = strs[0][i]

    for j in 1...strs.size
      if strs[j][i] != curr
        return prefix
      end
    end
    prefix += curr
  end
  prefix
end

testcases = [
  [["flower", "flow", "flight"], "fl"],
  [["dog", "racecar", "car"], ""],
  [["aa", "a"], "a"]
]

for t in testcases do
  puts "expected '#{t[1]}' and got '#{word_by_word(t[0])}'"
  puts "expected '#{t[1]}' and got '#{char_by_char(t[0])}'"
end
