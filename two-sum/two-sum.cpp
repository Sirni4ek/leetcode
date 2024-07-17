#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Create an unordered map to store the numbers and their indices
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // Return the indices of the current number and the complement
                return {numMap[complement], i};
            }
            
            // Add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        // If no solution is found (should not happen according to the problem constraints)
        return {};
    }
};

// Example usage
// int main() {
//     Solution solution;
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
//     vector<int> result = solution.twoSum(nums, target);
//     // Output: [0, 1]
//     for (int idx : result) {
//         cout << idx << " ";
//     }
//     return 0;
// }
