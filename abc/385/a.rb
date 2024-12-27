nums = gets.split.map(&:to_i)

nums.sort!

if nums[0] + nums[1] == nums[2] || nums.max == nums.min
  puts "Yes"
else
  puts "No"
end
