class Solution {
public:
    int minMoves2(vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];
        int totalMoves = 0;

        for (int value : nums) {
            totalMoves += std::abs(value - median);
        }    
        return totalMoves; 
    }
};