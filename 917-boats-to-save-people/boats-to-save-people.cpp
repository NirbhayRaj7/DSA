class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int numBoats = 0;
        int i = 0;
        int j = people.size() - 1;
      
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
            }
            j--;
            numBoats++;
        }
        
        return numBoats;
    }
};