class Solution {
public:
    int rob(vector<int>& nums) {
     int prevRob = 0;
     int maxRob = 0;

     for(const int num : nums) {
       const int temp = max(maxRob, prevRob + num);
       prevRob = maxRob;
       maxRob = temp;
      }

     return maxRob;;
    }
};