class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1000000007; 
        int count[2] = {1, 0}; 
        int ans = 0; 
        int sum = 0;

        for (int number : arr) {
            sum += number;
            ans = (ans + count[sum % 2 ^ 1]) % MOD;
            ++count[sum % 2];
        }  
        return ans; 
    }
};