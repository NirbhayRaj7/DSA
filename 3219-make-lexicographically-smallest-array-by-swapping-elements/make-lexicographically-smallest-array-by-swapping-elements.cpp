class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        std::vector<int> indices(n);
        std::iota(indices.begin(), indices.end(), 0);

        std::sort(indices.begin(), indices.end(), [&](int i, int j) {
            return nums[i] < nums[j];
        });

        std::vector<int> ans(n); 
        for (int i = 0; i < n;) {
            int j = i + 1;
            while (j < n && nums[indices[j]] - nums[indices[j - 1]] <= limit) {
                ++j;
            }

            std::vector<int> temp(indices.begin() + i, indices.begin() + j);
            std::sort(temp.begin(), temp.end());

            for (int k = i; k < j; ++k) {
                ans[temp[k - i]] = nums[indices[k]];
            }
            i = j;
        }
        return ans; 
    }
};