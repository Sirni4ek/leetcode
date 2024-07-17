# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
  num_map = {} # Create a hash to store the numbers and their indices
  
  # Iterate through the array
  nums.each_with_index do |num, index|
    complement = target - num
    
    # Check if the complement exists in the hash
    if num_map.has_key?(complement)
      # Return the indices of the current number and the complement
      return [num_map[complement], index]
    end
    
    # Add the current number and its index to the hash
    num_map[num] = index
  end
  
  # If no solution is found (should not happen according to the problem constraints)
  return []
end

# Example usage:
puts two_sum([2, 7, 11, 15], 9).inspect # Output: [0, 1]
puts two_sum([3, 2, 4], 6).inspect     # Output: [1, 2]
puts two_sum([3, 3], 6).inspect        # Output: [0, 1]
