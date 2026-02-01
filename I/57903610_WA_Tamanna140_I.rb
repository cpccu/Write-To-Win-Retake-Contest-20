def solve
  # Read number of test cases
  t = gets.to_i

  # Iterate over each test case
  t.times do
    # Read the length of the arrays
    n = gets.to_i
    
    # Read the two arrays a and b
    a = gets.split.map(&:to_i)
    b = gets.split.map(&:to_i)
    
    # Hash to store the last occurrence and max length for each element
    last_position = {}
    max_len = 0

    # Merge both arrays and track contiguous equal values
    # Consider both arrays concatenated (i.e., a and b interwoven)
    a.each_with_index do |value, i|
      last_position[value] = [last_position.fetch(value, i) + 1, last_position.fetch(value, 0)].max
      max_len = [max_len, last_position[value]].max
    end
    b.each_with_index do |value, i|
      last_position[value] = [last_position.fetch(value, i) + 1, last_position.fetch(value, 0)].max
      max_len = [max_len, last_position[value]].max
    end

    puts max_len
  end
end