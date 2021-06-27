def dcp(msg)
  dp = Array.new(msg.size+1, 0)
  dp[0] = dp[1] = 1

  for i in 1...msg.size
    if msg[i] != '0'
      dp[i+1] = dp[i]
    end

    x = msg[(i-1)..i].to_i
    if msg[i-1] != '0' and (x >= 10 and x <= 26)
      dp[i+1] += dp[i-1]
    end
  end

  return dp.last
end

msg = gets.chomp
num_decodes = dcp(msg)
puts "#{num_decodes} way(s) to decode \"#{msg}\""
