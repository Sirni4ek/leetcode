/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    // Create a hash map to store the numbers and their indices
    let numMap = new Map();
    
    // Iterate through the array
    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        
        // Check if the complement exists in the map
        if (numMap.has(complement)) {
            // Return the indices of the current number and the complement
            return [numMap.get(complement), i];
        }
        
        // Add the current number and its index to the map
        numMap.set(nums[i], i);
    }
    
    // If no solution is found (should not happen according to the problem constraints)
    return [];
};

// Example usage:
console.log(twoSum([2, 7, 11, 15], 9)); // Output: [0, 1]
console.log(twoSum([3, 2, 4], 6)); // Output: [1, 2]
console.log(twoSum([3, 3], 6)); // Output: [0, 1]

